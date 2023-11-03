#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>

using namespace std;

int main()
{

	int *myPointer = nullptr;
	int *myPointer2 = nullptr;

//	myPointer = new int[10000];
//	myPointer2 = new int;
	
	myPointer = new int;
	myPointer2 = myPointer;

	*myPointer = 5;

	cout << *myPointer << endl;

	*myPointer2 = 10;

	cout << *myPointer << endl;

//	delete[] myPointer;
//	delete myPointer2;
	delete myPointer;


	myPointer = nullptr;
	myPointer2 = nullptr;

	printf("\nPress any key to quit...\n");
	_getch();
	return 0;
}