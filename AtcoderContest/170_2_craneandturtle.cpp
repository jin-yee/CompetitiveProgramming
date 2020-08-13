#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //x = total # of animal1 2
    //y = total # of legs

    int x, y;
    cin >> x >> y;

    if(y%2 != 0){
    	cout << "No";
    }else if(x == 1 && (y == 4 || y == 2)){
    	cout << "Yes";
    }else if(x == 1 && !(y == 4 || y == 2)){
    	cout << "No";
    }else if(x > 1 && y/4 <= x && x <= y/2){
    	cout << "Yes";
    }
    else{
    	cout << "No";
    }

    return 0;
}