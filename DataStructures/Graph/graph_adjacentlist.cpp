#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;

//unweighted ground
void addUWEdge(vector<int> *adj, int u, int v) {
	adj[u].push_back(v);
	adj[v].push_back(u);//if directed this shouldn't be added
}

//print adjacent list
void printAdjList(vector<int> *adj, int n){
	for(int i = 0; i < n; i++){
    	cout << i << " --> ";
    	for(int j = 0; j < adj[i].size(); j++){
    		cout << adj[i][j] << " ";
    	}
    	cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //adjacent list -> just an array of vector
    int v = 5;
    vector<int> adj[v];

    addUWEdge(adj, 0, 1);
    addUWEdge(adj, 0, 2);
    addUWEdge(adj, 1, 2);
    addUWEdge(adj, 2, 3);
    addUWEdge(adj, 4, 1);

    printAdjList(adj, 4); ///adj list, # of node

    return 0;
}