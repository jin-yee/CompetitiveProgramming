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

    char n;
    bool flag = true;
    
    while(scanf("%c", &n)!= EOF){
    	if(n=='"'){
    		printf(flag?"``":"''");
    		flag = !flag;
    	}
    	else{
    		printf("%c", n);
    	}
    }

    return 0;
}