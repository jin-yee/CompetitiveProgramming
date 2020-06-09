#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;

 int solve(int m, int n) {
    int dp[m][n];
    
    for(int i = 0; i < n ; i++){
        dp[0][i] = 1; //first row, you can only go left (1 way)
    }
    
    for(int i = 0; i < m ; i++){
        dp[i][0] = 1; //first column, you can only go down (1 way)
    }
    
    for(int i = 1; i < m; i++){
        for(int j = 1; j < n; j++){
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    
    return dp[m-1][n-1];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int m,n;
    cin >> m >> n;

    cout << solve(m,n);
    return 0;
}