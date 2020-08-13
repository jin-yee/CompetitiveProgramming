/*

9
3 2 3 3 7 4 5
3 1 3 3 1 5 7
6 1 7 2 1 4 3 5 2 7 1 6 3
3 1 5 3 3 6 2
4 2 7 3 2 7 2 8 1
4 4 2 3 3 7 3 9 4
5 3 1 6 3 5 2 8 3 9 2
3 5 1 7 3 9 5
3 8 5 7 2 6 4

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int nodes;
    int src;
    cin >> nodes;
    vector<pair<int,int>> graph[9];

    int d[nodes];
    queue<int> q;

    for(int i = 0; i < nodes; i++){
    	int edges;
    	cin >> edges;
    	for(int j = 0; j < edges; j++){
    		int u, weight;
    		cin >> u >> weight;
    		graph[i].push_back(make_pair(u,weight));
    	}
    }

    src = 0;
    for(int i = 0; i < nodes; i++){
        i == src ? d[i] = 0 : d[i] = INT_MAX;
        q.push(i);
    }

    while(!q.isEmpty()){
        
        int v = 
    }
    return 0;
}