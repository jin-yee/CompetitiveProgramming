//C++ queue data structure walk through
//Queue is a first in first out data structure

//Member function of queue
//bool empty - test whether a queue is empty
//size - return the size of a queue
//front - access the first element of queue
//back - access the last element of queue
//push - insert element at the last (no cut queue!)
//pop - delete the first element of queue (no cut queue!)

//for more info, go to www.cplusplus.com/reference/stl/queue/
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	//a queue that can hold integer value
	queue<int> q;
	 
	for(int i = 0; i< 10 ;i++)
	{
		cout << "enqueuing: " << i << endl;
		//make use of push function
		q.push(i);
	}
	
	//using the size function 
	cout << "Size of my queue: " << q.size() << endl;
	
	//using the back function
	cout << "The last guy in the queue is " << q.back() << endl;
	
	//using the front function
	cout << "The head of the queue is " << q.front() << endl;
	
	//using empty function and pop function to dequeue
	while(!q.empty())
	{
		cout << "dequeuing " << q.front() << endl;
		q.pop();
	}
	
	//check the size
	cout << "After dequeue the size is " << q.size() << endl;
	
	return 0;
}
