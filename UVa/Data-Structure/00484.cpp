/***
 * By : IE3XT
 *              _          _          _          _      _            _       
 *             /\ \       /\ \      /\ \       /_/\    /\ \         /\ \     
 *             \ \ \     /  \ \    /  \ \      \ \ \   \ \_\        \_\ \    
 *             /\ \_\   / /\ \ \  / /\ \ \      \ \ \__/ / /        /\__ \   
 *            / /\/_/  / / /\ \_\/ / /\ \ \      \ \__ \/_/        / /_ \ \  
 *           / / /    / /_/_ \/_/\/_//_\ \ \      \/_/\__/\       / / /\ \ \ 
 *          / / /    / /____/\     __\___ \ \      _/\/__\ \     / / /  \/_/ 
 *         / / /    / /\____\/    / /\   \ \ \    / _/_/\ \ \   / / /        
 *     ___/ / /__  / / /______   / /_/____\ \ \  / / /   \ \ \ / / /         
 *    /\__\/_/___\/ / /_______\ /__________\ \ \/ / /    /_/ //_/ /          
 *    \/_________/\/__________/ \_____________\/\/_/     \_\/ \_\/           
 *                                                                           
 */

#include <bits/stdc++.h>

using namespace std;

int main() {

	set<int> s;
	map<int, int> mp;
	queue<int> q;
	int n;

	while(cin >> n){
		//cout << n;
		if(s.find(n) == s.end()){
			s.insert(n);
			q.push(n);
			mp.insert(pair<int, int>(n, 1));
		}else{
			mp[n] = mp[n] + 1;
		}
	}

	while(!q.empty()){
		printf("%d %d\n", q.front(), mp[q.front()]);
		q.pop();
	}
	return 0;
}