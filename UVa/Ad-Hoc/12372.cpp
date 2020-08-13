#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)

using namespace std;

const char goodans[] = "Case %d: good\n";
const char badans[] = "Case %d: bad\n";

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, counter = 1;
    cin >> t;

    while(t--){
    	int a, b, c;
    	cin >> a >> b >> c;
    	if(a > 20 || b > 20 || c > 20){
    		printf(badans,counter++);
    	}else{
    		printf(goodans, counter++);
    	}
    }

    return 0;
}