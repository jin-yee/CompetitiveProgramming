//Given an array of positive integer and an integer s,
//tell me if there exist an non-empty subset such that
//the sum of the element(s) in the subset equal to s.

/*test case
19
7 3 2 5 8
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> arr;
    int temp, s;

    cin >> s;
    while(cin >> temp) arr.push_back(temp);

    bool dp[(int)arr.size()][s];

    for(int i = 0; i < arr.size(); i++) dp[i][0] = true;

    for(int j = 0; j < s; j++) dp[0][j] = false;

    for(int i = 1; i < arr.size(); i++){
    	for(int j = 1; j < s; j++){
    		// not choose or choose
    		if(dp[i-1][j] || dp[i-1][j-arr[i]])
    			dp[i][j] = true;
    		if(arr[i-1] > j) dp[i][j] = dp[i-1][j];
    	}
    }

    dp[(int)arr.size()][s] ? cout << "true" : cout << "false";
    return 0;
}