//Implementation example

#include "example.h" //Include your header file here

//Try to include tool header files in the cc source file
#include <iostream>
#include <cstring>
//.............

StatusType BigTable::Put(KeyType r, KeyType c, DataType v) {
	if (error) {
		return failed_status;
	}
	
	database_[key] = v;
	//..........
	return sucess_status;
}

DataType BigTable::Get(DataType r, DataType c) {
	if (error) {
		return invalid_data;
	}

	return database_.Find(r, c);
}

StatusType BigTable::CPut(KeyType r, KeyType c, DataType old_data, DataType new_data) {
	database_[r, c] = new_data;
	return your_status;
}

StatusType BigTable::Delete(KeyType r, KeyType c) {
	database_.erase(r, c);
	return your_type;
}


StatusType BigTable::LookUp(KeyType dummy1, KeyType dummy2) {
	return (dummy1, dummy2) in database_;
}


AnyType BigTable::YourHelper(AnyType any_arg1, AnyType any_arg2 /*Any args*/) {
	DoSomething {

	}
	return your_type;
}
AnyType BigTable::YourHelper2(AnyType any_arg1, AnyType any_arg2 /*...........*/) {
	DoSomething{

	}
	return your_type;
}