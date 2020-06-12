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

    int n, k, sum = 0;
    int minn = INT_MAX;
    int min_index;

    cin >> n >> k;

    int height[n+1] = {0};
    
	for(int i = 1; i <= n; i++){
    	int temp;
    	cin >> temp;
    	height[i] = temp;
    	sum += height[i];
    	if(i >= k) {
    		sum -= height[i-k];
    		//cout << sum << endl;
    		if(sum < minn){
    			min_index = i-k+1;
    			minn = sum;
    		}
    	}
	}

    cout << min_index;
    return 0;
}