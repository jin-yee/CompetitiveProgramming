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

    int t;
    cin >> t;
    string test;
    int amount;
    int total = 0;

    while(t--){
    	cin >> test;
    	if(test[0] == 'd'){
    		cin >> amount;
    		total += amount;
    	}else if(test[0] == 'r'){
    		cout << total << '\n';
    	}
    }
    return 0;
}