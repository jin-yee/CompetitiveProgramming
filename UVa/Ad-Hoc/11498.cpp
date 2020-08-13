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

	int x, y, n;
	cin >> n;

    while(n!=0){
	    cin >> x >> y;
	    rep(i,n){	
	    	int a, b;
	    	cin >> a >> b;
	    	if((a==x||b==y)||(a==x&&b==y))
	    		cout << "divisa" << endl;
	    	else if(a>x&&b>y)
	    		cout << "NE" << endl;
	    	else if(a>x&&b<y)
	    		cout << "SE" << endl;
	    	else if(a<x&&b>y)
	    		cout << "NO" << endl;
	    	else if(a<x&&b<y)
	    		cout << "SO" << endl;
	    }
	    cin >> n;
    }
    
    return 0;
}