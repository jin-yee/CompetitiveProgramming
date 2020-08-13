#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    int min;
    int max;
    bool flag;
    cin >> t;

    rep(i,t){
    	int n;
    	cin >> n;
    	flag = true;
    	rep(i,n){
    		int m;
    		cin >> m;
    		if(flag == true){
    			min = m;
	    		max = m;
	    		flag = false;
    		}
    		if(flag == false){
    			if(m < min){
    				min = m;
	    		}
	    		if(m > max){
	    			max = m;
	    		}
    		}
    	}
    	cout << 2*(max-min) << endl;
    }
    return 0;
}