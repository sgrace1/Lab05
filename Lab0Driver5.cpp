// Spencer Grace
// COSC 2030
// LAB05
#include"Lab05MyStack.h"
#include<iostream>
#include<string>



using std::cout;
using std::cin;
using std::endl;

int main()
{
	My_Stack myStack;

	string a;  //testing stringReversal1
	cout << "please enter a string" << endl;
	cin >> a;
	cout << stringReversal1(a) << endl;


	cout << endl;
	string b; //testing stringReversal2
	cout << "please enter a string" << endl;
	cin >> b;
	cout << stringReversal2(b) << endl;

	cout << endl;
	string c;  //testing stringReversal3
	cout << "please enter a string" << endl;
	cin >> c;
	cout << stringReversal3(c) << endl;

	cout << endl;
	string d;  ////testing stringReversal4
	cout << "please enter a string" << endl;
	cin >> d;
	cout << myStack.stringReversal4(d) << endl;
    return 0;
	
}

