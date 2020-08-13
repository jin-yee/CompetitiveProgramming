#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, counter = 0;
    int c = 1;
    cin >> t;
	
	while(t!=0){
		rep(i,t){
			int temp;
			cin >> temp;
			temp ? counter++ : counter--;
		}
		cout << "Case " << c++ << ": " << counter << endl;
		counter = 0;
		cin >> t;
	}

	
    return 0;
}