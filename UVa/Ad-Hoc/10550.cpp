#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;

const int division = 9;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int initial, a, b, c, degree;
    cin >> initial >> a >> b >> c;

    while(!(initial==0&&a==0&&b==0&&c==0)){
    	degree = 720; //turn the dial 2 full turn cw
    	degree += abs(a - initial)*9;
    	//degree += 360; //turn the dial 1 full turn ccw
    	//degree += (40 + b - a)*9;
    	//degree += (c - b)*9;
    	cout << degree << endl;
    	cin >> initial >> a >> b >> c;
    }

    return 0;
}