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

    int l;
    vector<int> money;
    cin >> l;
    
    while(l--){
    	int temp;
    	cin >> temp;
    	money.push_back(temp);
    }

    int n = money.size();

    //these two case are required for leetcode submission
    if( n == 0)
    	cout << 0;
    else if(n == 1)
    	cout << money[0];
    else{
    	//deifne opt[i] as the maximum amount of money we can rob
	    //after robbed i houses
	    vector<int> opt(n + 1, 0);

	    opt[0] = money[0];	
	    opt[1] = max(money[1], money[0]);

	    //if choose the current house, total money = money at current + money at previous huose (i-2)
	    //if don't choose, just take the case where the money robbed from last house
	    for(int i = 2; i <= n; i++)
	    	opt[i] = max(money[i] + opt[i-2], opt[i-1]);

	    cout << opt[n-1];
	    return 0;
    }
    
}