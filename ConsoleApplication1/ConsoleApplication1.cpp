// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "forwardList.h"
using namespace std;

int main()
{
	forwardList list;
	list.PushBack(1);
	list.PushBack(2);
	list.PushBack(3);
	list.PushBack(4);
	list.PushBack(5);
	list.PushBack(6);
	list.Print();
	const Node* result = list.find(2);
	if (result != nullptr) {
		cout <<"\nResult - " << result->value << endl;
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
