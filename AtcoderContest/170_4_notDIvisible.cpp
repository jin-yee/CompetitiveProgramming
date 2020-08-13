#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<long> arr;
    long temp;

    while(cin >> temp){
    	arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    bool dp[arr[n-1]+1] = {true};

    for(long long x : arr){
    	int i = 2;
    	while(x*i <= arr[n-1]){
    		dp[x*i] == false;
            i++;
    	}
    }

    for(int i = 0; i < arr[n-1]; i++){
    	dp[i] ? cout << 1 : cout << 0;
    	cout << endl;
    }

    return 0;
}