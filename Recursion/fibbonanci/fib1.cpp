#include <iostream>

using namespace std;

int fib( int n )
{
	if( n <= 1)
		return 0;
	return fib(n-1) + fib(n-2);
}

int main()
{
	int n;
	cout << "Input a term: " << endl;
	cin >> n; 
	cout << fib(n) << "\n";
	return 0;
}
