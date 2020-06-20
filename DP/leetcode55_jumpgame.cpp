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

    vector<int> arr;
    int temp;
    while(cin >> temp)
    	arr.push_back(temp);

    int range = arr[0];

    for(int i = 1; i <= range; i++){
    	if(range >= (int) arr.size() - 1){
    		cout << "Can Jump";
    		return 0;
    	}
    	range = max(i + arr[i], range);
    	//cout << range << endl;
    }

    cout << "Cannot Jump";
    return 0;
}