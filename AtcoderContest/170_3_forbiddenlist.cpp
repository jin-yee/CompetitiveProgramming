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

    int x, n;

    int temp;
    bool flag = true;

    vector<int> p;
    while(cin >> temp)
    	p.push_back(temp);

    for(int k : p){
    	cout << k;
    }
    
    for(int k : p){
    	if(k == x) flag = false; break;
    }

    if(flag == true){
    	cout << x;
    }else{
    	int i = x-1, j = x+1;
    	bool flag2 = true;
    	while(flag2){
    		for(int k : p){
    			if(k == i || k == j){
    				if(k == i) i--;
    				else if(k == j) j++;
    			}else{
    				flag2 == false;
    			}
    		}
    	}

    	if(abs(x-i) > abs(x-j)){
    		cout << abs(i);
    	}else{
    		cout << abs(j);
    	}
    }
    return 0;
}