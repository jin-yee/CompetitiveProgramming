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

    int temp, counter = 0;
    while(cin >> temp){
    	if(temp != 0)
    		counter++;
    	else{
    		cout << counter + 1;
    		return 0;
    	}
    }
    
}