#include "example.h"

//main function for big table

//Example 1 - from unreal engine, ref: https://blog.csdn.net/freehawkzk/article/details/80593687
int main(int argc, char** argv) {
	BigTable table;
	table.Initialize();
	while (true) {
		table.Listen();
		table.Respond();
	}
	table.ClearResource();

	return 0;
}

//Example 2 - from zookeeper, ref: https://blog.csdn.net/weixin_45453628/article/details/125228762
int main(int argc, char** argv) {
	BigTable table;
	table.ParseArgs(argc, argv);
	table.run();

	return 0;
}