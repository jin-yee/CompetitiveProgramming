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

    int t;
    cin >> t;

    while(t--){
    	string num;
    	cin >> num;

    	if(num.length() == 5){
    		cout << 3 << endl;
    	}else if(num.length() == 3){
    		if((num[0]=='o'&& num[1]=='n')||(num[0]=='o'&& num[2]=='e')||(num[1]=='n'&& num[2]=='e')){
    			cout << 1 << endl;
    		}else{
    			cout << 2 << endl;
    		}
    	}
    }
    return 0;
}