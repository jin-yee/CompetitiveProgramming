/*test case
6 -5 -7 4 -4
-9 3 -6 5 2
-10 4 7 -6 3
-8 9 -3 3 -7

1 2 -1 -4 -20
-8 -3 4 2 1
3 8 10 1 3
-4 -1 1 7 -6
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int temp, row, col;
    cin >> row >> col;

    int mat[row][col];
    int rrs[row];
    int maxSum = INT_MIN, maxLeft, maxRight, maxTop, maxBottom;

    int current_sum;

    //reading input
    for(int i = 0; i < row; i++){
    	for(int j = 0; j < col; j++){
    		cin >> temp;
    		mat[i][j] = temp;
    	}
    }

    //the real shit
    for(int i = 0; i < col; i++){
    	for(int j = 0; j < row; j++) rrs[j] = 0;
     	for(int j = i; j < col; j++){
     		for(int k = 0; k < row; k++) rrs[k] += mat[k][j];
	    	current_sum = 0;
	     	for(int k = 0; k < row; k++){
	     		current_sum += rrs[k];
	     		if(current_sum < 0) current_sum = 0;
	     		maxSum = max(current_sum, maxSum);
	     	}
	    }
    }
    cout << maxSum << endl;
    return 0;
}