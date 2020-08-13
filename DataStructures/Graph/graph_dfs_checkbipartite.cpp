#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;

const int N = 10;

vector<int> adj[N];
bool visited[N] = {false};
bool colour[N] = {false};
bool col = false;

void dfs(int n, bool col){
	if(visited[n]) return;

	visited[n] = true;
	colour[n] = col;

	for(auto u : adj[N]){
		dfs(u, !col);
	}
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    adj[0].push_back(1);
    adj[0].push_back(3);
    adj[1].push_back(2);
    adj[2].push_back(3);

    dfs(0, col);

    for(bool u : colour){
    	cout << u << endl;
    }

    return 0;
}