// Stack implementation using Linked List
// The Head node is to keep track of the new added node in LL
#include <iostream>

using namespace std;

struct Node {
	int data;
	Node *nextNode;
};

class StackLL {
private:
	//head is to keep track of the node at the top of stack
	Node *head;
public:
	//default constructor, nothing in stack so head is pointing to null
	StackLL(){
		head = NULL; 
	}

	//add data on top of stack and update the head
	void push(int data){
		Node *node = new Node();
		node->data = data;
		node->nextNode = head;
		head = node;
	}

	//remove data on top of stack and return as a value
	int pop(){
		int value = -1
		if(isEmpty()) 
			cout << "Error! Stack is empty" << endl;
		
		else {
			value = head->data;
			head = head->nextNode;
		}
		return value;
	}

	//only return the data on top of stack, doesnt remove it
	int peek(){
		if(isEmpty()) {
			cout << "Error! Stack is empty" << endl;
			return -1;
		}
		return head->data;
	}

	//check if stack is empty
	bool isEmpty() {return head == NULL;}

};

int main (){
	//instantiate a stack object wih
	StackLL stack;
	//add data to the stack
	for (int i = 0; i < 10; i++) {
		stack.push(i);
	}

	// peek data on top
	cout << "peeking top of stack" << endl;
	cout << stack.peek() << endl;

	//pop values from stack
	cout << "popping values" <<endl;
	for(int i = 0; i<11; i++) {
		cout << stack.pop() <<endl;
	}
	
}