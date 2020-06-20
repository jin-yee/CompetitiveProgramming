//Eulid algorithm uses 3 properties of gcd of two integer
//1. gcd(a,0) = gcd(0,a) = a;
//2. gcd(b,0) = gcd(0,b) = b;
//3. gcd(a,b) = gcd(b,r) where a>b and r = a%b
//super simple recursive Eulid code
// int gcd(a,b){
// 	if(b == 0)
// 		return b;
// 	else1 2
// 		gcd(b, a%b);
// }

//This question uses a simple fact that gcd(1,x) = 1, x is any integer

#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a, b;
    cin >> a >> b;

    if(a == b){
    	cout << a;
    }else{ //a is always smaller than b
    	cout << 1;
    }

    return 0;
}