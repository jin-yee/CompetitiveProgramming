//implement stack using c++ array


#include <iostream>
#define MAX 100

using namespace std;

//create a stack class
class Stack {
private:
	int size;
	int top;
	int *st;
public:
	//default constructor, size of array default to 1000
	Stack() {
		top = -1; //by default stack is empty, hence index is -1 (out of bound)
		size = MAX;
		st = new int[size];
	}

	//constructor with given parameters
	Stack(int size) {
		top = -1;
		this->size = size;
		st = new int[size];
	}

	//Check if stack is empty
	bool isEmpty() {
		return top == -1; 
	}

	bool isFull() {
		return top == size -1;
	}
	
	//Stack up a new item, if overflow prints overflow
	void push(int input){
		if (isFull())
			cout << "Stack overflow" << endl;
		else 
			st[++top] = input;
	}

	//Remove the top element and returns the value, if empty stack, returns -1
	int pop() {
		int x = -1;
		if(isEmpty()) {
			cout << "Stack is empty!" <<endl;
		}
		else {
			x = st[top];
			top --;
		}
		return x;
	}
	
	// returns the value of top element but does not remove it, if empty returns -1
	int getTop(){
		if(isEmpty()){
			cout << "Stack is empty!" <<endl;
			return -1;
		} 
		else{
			return st[top];
		}
	}

	int peek(int position) {
		if (position > top) {
			cout << "invalid index" <<endl;
			return -1;
		} 
		else {
			return st[position];
		}
	}


};

int main () {
	Stack stack1(3);
	cout << "at index 0 is " << stack1.peek(0) << endl;
	stack1.push(3);
	stack1.push(4);
	stack1.push(2);
	stack1.push(5);
	cout << "the number on top is " << stack1.getTop() << endl;
	cout << "at index 0 is " << stack1.peek(0) << endl;
	int x = stack1.pop();
	int y = stack1.pop();
	int z = stack1.pop();
	z = stack1.pop();

	cout << x << ", " << y << ", " << z << endl;
	return 0;
}