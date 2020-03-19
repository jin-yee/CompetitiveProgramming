#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	//vector<data type> name(size)
	vector<int> v(10);
	
	v[0] = 10;
	v[1] = 22;
	v[2] = 5;
	
	cout << "Size of the vector is " << v.size() << endl;
	
	//we can add element to the end, we have change the vector size
	v.push_back(6);
	
	cout << "Size of the vector is " << v.size() << endl;
	
	//front function return the first element value
	cout << "First element of vector is : "<< v.front() << endl;
	
	//back function return the last element value
	cout << "Last element of vector is : "<< v.back() << endl;
	
	//at(n) function tells theh value at index n
	cout << "Element at index of 2 is : " << v.at(2) << endl;
	
	//travel the vector using size function
	for(uint i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	
	//sorting a vector
	sort(v.begin(), v.end());
	for(uint i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}
