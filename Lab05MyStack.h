// Spencer Grace
// COSC 2030
// LAB05

#include <stdlib.h>	
#include <iostream>
#include <string.h>
#include <stack>
#include <vector>
#include <list>


using std::vector;
using std::stack;
using std::string;
using std::list;

/*My_stack class is used for simpilifing the reverse calls into member functions*/
class My_Stack     
{
	list<char> temp;
public:
	bool isEmpty() const;
	void push(char c);
	string pull();
	string stringReversal4(string input);     //added here so it can utilize the class methods
private:
	char c;
	string input;
	string output;

};

//prototyping

string stringReversal1(string input);

string stringReversal2(string input);

string stringReversal3(string input);
