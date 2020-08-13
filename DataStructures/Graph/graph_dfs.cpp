#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;

const int numOfNodes = 1001;
vector<int> adj[numOfNodes];
bool visited[numOfNodes] = {false};

void dfs(int node){
	
	if(visited[node]) return;

	visited[node] = true;

	//process node
    cout << node;

	for(auto u : adj[node]){
		dfs(u);
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
    adj[1].push_back(3);
    adj[2].push_back(3);

    dfs(0);

    return 0;
}