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

    int n, sum;
    cin >> n >> sum;

    vector<int> coins;
    int temp;

    while(cin >> temp)
    	coins.push_back(temp);

    //let dp[i] be the minimum number of coin needed
    //to form i amount of money.
    //e.g. dp[3] => minimum number of coin to make up 3 $

    vector<int> dp(sum+1, INT_MAX);
    dp[0] = 0; //no way to make up 0$

    for(int i = 1; i <= sum ; i++){
    	for(int coin : coins){
    		//if coin is bigger than desired amount of money, discard it.
    		if(coin <= i){
    			//if we choosen coin x, then the amount left is i - x, and
    			//the number of coin + 1
    			//We then compare the # of coin (initialized to maximum),
    			//with the choice we made so far, choose the minimum one
    			dp[i] = min(dp[i-coin] + 1, dp[i]);
    			//cout << dp[i] << endl;
    		}
    	}
    }

    //finally, we print dp[sum], if dp[sum] != INT_MAX
    if(dp[sum] != INT_MAX)
    	cout << dp[sum] << endl;
    else
    	cout << -1 << endl;

    return 0;
}