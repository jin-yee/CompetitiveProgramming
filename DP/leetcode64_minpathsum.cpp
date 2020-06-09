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

    int row, col; //row, column
    cin >> row >> col;
    int grid[row][col];

    for(int i = 0; i < row; i++){
    	for(int j = 0; j < col; j++){
    		int temp;
    		cin >> temp;
    		grid[i][j] = temp;
    	}
    }

    int dp[row][col] = {0};

    //initialize
    dp[0][0] = grid[0][0];

    for(int i = 1; i < row; i++){
    	dp[i][0] = grid[i][0] + dp[i-1][0];
    }

    for(int j = 1; j < col; j++){
    	dp[0][j] = grid[0][j] + dp[0][j-1];
    }

    for(int i = 1; i < row; i++){
    	for(int j = 1; j < col; j++){
    		dp[i][j] = grid[i][j] + min(dp[i-1][j], dp[i][j-1]);
    	}
    }

    cout << dp[row-1][col-1];
    return 0;
}