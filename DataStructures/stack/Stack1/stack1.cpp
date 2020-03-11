//implement stack using c++ array

#include<iostream>
#define MAX 1000

using namespace std;

//create a stack class
class Stackk {
	private:
		int top;
		int stack[MAX];
	public:
		//create a constructor
		Stackk() { top = -1; } //by default if stack is empty top is -1
		//this function can check if stack is empty, if empty return -1
		bool isEmpty();
		//remove the top element (if any) from a stack
		int pop();
		//Stack up a new item, if successfuly, return true, if overflow return false
		bool push(int);
};

bool Stackk::push(int data)
{
	//check if overflow
	if(top >= (MAX - 1))
	{
		cout << "Stack overflow";
		return false;
	}
	else
	{
		stack[++top] = data;
		cout << data << endl;
		return true;
	}
}

bool Stackk::isEmpty()
{
	if(top == -1)
		return true;
}

int Stackk::pop()
{
	if(top == -1)
	{
		cout << "No stack to pop" << endl;
	}
	stack[top] = NULL;
	top -= 1;
}

int main()
{
	return 0;
}
