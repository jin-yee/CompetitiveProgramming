#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string txt1, txt2;

    getline(cin, txt1);
    getline(cin, txt2);

    int m = (int) txt1.length();
    int n = (int) txt2.length();

    long dp[m+1][n+1];

    for(int i = 0; i <= m; i++)
    	dp[i][0] = 0;

	for(int i = 0; i <= n; i++)
		dp[0][i] = 0;
    
    for(int i = 1; i <= m; i++){
    	for(int j = 1; j <= n; j++){
			if(txt1[i-1] == txt2[j-1])
				dp[i][j] = dp[i-1][j-1] + 1;
			else
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    	}
    }

    cout << dp[m][n];
    return 0;
}