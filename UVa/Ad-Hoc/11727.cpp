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

    int n;
    cin >> n;

    rep(i,n){
    	unsigned int x,y,z;
    	cin >> x >> y >> z;
    	unsigned int arr[3] = {x,y,z};
    	sort(arr, arr+3);
    	cout << "Case " << i+1 << ": " << arr[1] << endl;
    }
    return 0;
}