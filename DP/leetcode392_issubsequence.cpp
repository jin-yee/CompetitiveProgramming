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

    string s, t;
    getline(cin, s);
    getline(cin, t);

    int j = 0; // have to declare outside, otherwise cannot use outside loop

    for(int i = 0; i < t.length() && j < s.length(); i++){
    	if(s[j] == t[i])
    		j++;
    }

    if(j==s.length()) //checked all the character in s
    	cout << "true";
   	else
   		cout << "false";

    return 0;
}