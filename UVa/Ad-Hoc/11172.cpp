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

    int n;
    cin >> n;

    rep(i,n){
    	int a, b;
    	cin >> a >> b;
    	if(a > b)
    		cout << '>' << '\n';
    	else if(a < b)
    		cout << '<' << '\n';
    	else
    		cout << '=' << '\n';
    }

    return 0;
}