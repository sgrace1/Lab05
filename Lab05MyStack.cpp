// Spencer Grace
// COSC 2030
// LAB05

#include"Lab05MyStack.h"
using std::cout;
using std::endl;



/*
	This function utilizes a stack to reverse numbers
*/
string stringReversal1(string input) 
{
	stack<char> temp;				//initlize the stack
	
	for (int i = 0; i <= input.length(); i++) 
	{
		char index = input[i];     //itorate through
		temp.push(index);     //add each char of input string to stack

	}
	string output;
	while (!(temp.empty())) 
	{
		char popTemp = temp.top();			//remove all the members of the stack
		output += popTemp;					//add it all to a big string
		temp.pop();
	}
	temp.empty();			
	return output;				//output string

	//(a) bool empty() const;
	//(b) void pop();
	//(c) void push(char& c);
	//(d) char& top();
}
/*
This function utilizes a vector to reverse numbers
*/

string stringReversal2(string input) 
{

	vector<char> temp;					//initilize the vector


	for (int i = 0; i <= input.length(); i++)
	{
		char index = input[i];				//itorate through and add to the vector
		temp.push_back(index);

	}
	string output;
	while (!(temp.empty()))
	{
		char popTemp = temp.back();			//add all of the char members to a string.
		output += popTemp;
		temp.pop_back();
	}
	temp.empty();
	return output;					//output the string


	//(a) bool empty() const;
	//(b) void pop_back();
	//(c) void push_back(char& c);
	//(d) char& back();
}

/*
This function utilizes a list to reverse numbers
*/
string stringReversal3(string input) 
{
	list<char> temp;				//initlize the list

	for (int i = 0; i <= input.length(); i++)
	{	
		char index = input[i];			//add all the members of inputted string to the list
		temp.push_back(index);

	}
	string output;
	while (!(temp.empty()))
	{
		char popTemp = temp.back();			//add all of the members to a big string
		output += popTemp;				
		temp.pop_back();				
	}
	temp.empty();				//output string
	return output;

	//(a) bool empty() const;
	//(b) void pop_back();
	//(c) void push_back(char& c);
	//(d) char& back();
}


/*
Here is the code for my class My_Stack. I added stringReversal4 to this list for ease of use

*/

// this simpilifes the .empty() calls
bool My_Stack::isEmpty() const
{
	bool test = temp.empty();				//test if empty
	return test;				//return bool
}

//
void My_Stack::push(char c)
{
	temp.push_back(c);				//pushes a member off the vector
}
string My_Stack::pull()
{
	while (!(isEmpty()))
	{
		output;
		char popTemp = temp.back();			//while the vector is not empty it adds each member to a big string and removes the member from the vector
		output += popTemp;
		temp.pop_back();
	}
	temp.empty();
	return output;				//outputs the string
}

string My_Stack::stringReversal4(string input)
{

	for (int i = 0; i <= input.length(); i++)
	{
		char index = input[i];							//gets the input and preforms the push() function
		push(index);

	}
	output = pull();				//preforms the pull() function
	return output;				//outputs the string
	//(a) bool isEmpty() const;
	//(b) void push(char& c);
	//(c) char pull();
}