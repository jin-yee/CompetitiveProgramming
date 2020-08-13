#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    rep(i,t){
    	int n;
    	int ans;
    	cin >> n;
    	ans = (((((n*567)/9)+7492)*235)/47 - 498);
    	ans = (ans % 100) / 10;
    	cout << abs(ans) << endl;
    }
    return 0;
}