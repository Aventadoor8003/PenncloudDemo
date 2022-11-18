#pragma once  //pragma once is necessary for <!every!> header file to avoid redefination

#include <unordered_set>
// Minimize reference to aother header files


//DO NOT use any namespace here to avoid namespace conflict

class BigTable { //Class name: UpperCamelCase
public: //Public section, used by any users includes your header file.
	/*
	* Think really carefully before writing your own api
	*/

	StatusType Put(KeyType r, KeyType c, DataType v);

	DataType Get(DataType r, DataType c);

	StatusType CPut(KeyType r, KeyType c, DataType old_data, DataType new_data);

	StatusType Delete(KeyType r, KeyType c);

protected: //APIs only used by sub classes
	/*
	* Your own protected APIs here 
	*/

private: //Write your own methods

	/*
	* Your own private APIs here
	*/

	//class variable name: end with an underscore
	DataType database_;

	StatusType LookUp(KeyType dummy1, KeyType dummy2);
	//your private methods..................
	//................

	AnyType YourHelper(AnyType any_arg1, AnyType any_arg2 /*Any args*/);
	AnyType YourHelper2(AnyType any_arg1, AnyType any_arg2 /*...........*/);

};

/**
*----------------------------------------------Key points---------------------------------
* 
* 1. Start your header file with '#pragma once'. This macro must be polaced in the first line of any header file ...... -line 1
* 2. Section sequence: Start with public section, then protected, then private......................................... -line 9: 22, 27
* 3. Methods should be UpperCamelCase, and your own type should be UpperCamelCase too ................................. -line 14
* 4. Variables in a class should end with underscore .................................................................. -line 34
* 
* 5. DO NOT USE ANY NAPESPACE IN ANY HEADER FILE!!!!!
* 
* reference:https://google.github.io/styleguide/cppguide.html#Classes
*/
