#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int temp, carry = 0;
    vector<int> arr;
    while(cin >> temp) arr.push_back(temp);


    for(int i = arr.size()-1; i >= 0; i--){
    	temp = arr[i];
    	temp += carry;

    	if(i == arr.size() -1) temp += 1;

     	if(temp >= 10){
     		carry = temp/10;
     		arr.push_back(temp%10);
     		if(i == 0 && carry != 0) arr.push_back(carry);
     	}else{
     		carry = 0;
     		arr.push_back(temp);
     	}
    }

    for(int i = arr.size()-1; i >= arr.size()/2; i--) cout << arr[i];

    return 0;
}