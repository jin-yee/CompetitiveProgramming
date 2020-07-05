#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int cap;
    int item;
    vector<int> value;
    vector<int> weight;

    cin >> cap;
    cin >> item;

    for(int i = 0; i < item; i++){
    	int temp; cin >> temp;
    	value.push_back(temp);
    }

    for(int i = 0; i < item; i++){
    	int temp; cin >> temp;
    	weight.push_back(temp);
    }

    //let dp[i][j] be the maximum itemue of getting
    //first ith item with total weight of j
    int dp[item+1][cap+1] = {0};

    for(int j = 0; j <= cap; j++) dp[0][j] = 0;

    for(int i = 1; i <= item; i++){
    	for(int j=1; j <= cap; j++){
    		if(weight[i-1] > j)
    			dp[i][j] = dp[i-1][j];
    		else
    			dp[i][j] = max(dp[i-1][j-weight[i-1]] + value[i-1], dp[i-1][j]);
    	}
    }

    cout << dp[item][cap];
    return 0;
}