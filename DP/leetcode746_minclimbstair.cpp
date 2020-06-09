#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;

int main(){

	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //reading input
    int costsize;

    cin >> costsize;

    vector<int> cost;

    for(int i = 0; i< costsize; i++){
    	int temp = 0;
    	cin >> temp;
    	cost.push_back(temp);
    }

    //start of dp
    //setting array for storing state
    //defination: let opt[i] be the minimum cost for climbing i steps
    vector<int> opt(costsize + 1, 0);

    //setting initial condition for induction
    opt[0] = cost[0];
    opt[1] = cost[1];

    for(int i = 2; i <= costsize; i++){
    	//if reach top, don't count the cost
    	if(i == costsize){
    		opt[i] = min(opt[i-1], opt[i-2]);
    	}else{
    		opt[i] = cost[i] + min(opt[i-1], opt[i-2]);
    		//e.g. opt[2] = cost[2] (38) + 17 (17 < 25)
    		//	   opt[3] = cost[3] (2) + 17 (17 < 17 + 38 or opt[2])
    	}
    }

    cout << opt[costsize];
}