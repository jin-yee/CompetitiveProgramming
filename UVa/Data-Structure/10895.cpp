/***
 * By : IE3XT
 *            _          _          _          _      _           _       
 *          /\ \       /\ \      /\ \       /_/\    /\ \        /\ \
 *          \ \ \     /  \ \    /  \ \      \ \ \   \ \_\       \_\ \
 *          /\ \_\   / /\ \ \  / /\ \ \      \ \ \__/ / /       /\__ \
 *         / /\/_/  / / /\ \_\/ / /\ \ \      \ \__ \/_/       / /_ \ \
 *        / / /    / /_/_ \/_/\/_//_\ \ \      \/_/\__/\      / / /\ \ \
 *       / / /    / /____/\     __\___ \ \      _/\/__\ \    / / /  \/_/
 *      / / /    / /\____\/    / /\   \ \ \    / _/_/\ \ \  / / /
 *  ___/ / /__  / / /______   / /_/____\ \ \  / / /   \ \  / / /
 * /\__\/_/___\/ / /_______\ /__________\ \ \/ / /   /_/ //_/ /
 * \/_________/\/__________/ \_____________\/\/_/    \_\/ \_\/
 *                                                                           
 */

#include <bits/stdc++.h>

using namespace std;

int adjMat[10000+1][10000+1];

int main() {

	int row, col;
	while(cin >> row >> col){
		for(int i = 1; i <= row; i++){
			int nZ;
			cin >> nZ;
			if(nZ != 0){
				int colIndex[nZ+1];
				for(int j = 1; j <= nZ; j++) cin >> colIndex[j];
				for(int j = 1; j <= nZ; j++) cin >> adjMat[i][colIndex[j]];
			}
		}

		//Debugging
		// for(int i = 1; i <= row; i++){
		// 	for(int j = 1; j <= col; j++){
		// 		cout << adjMat[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }

		printf("%d %d\n", col, row);
		
		for(int i = 1; i <= col; i++){
			int nZ = 0;
			vector< pair<int,int> > temp;
			for(int j = 1; j <= row; j++){
				if(adjMat[j][i]!=0){
					nZ++;
					temp.push_back( make_pair(j, adjMat[j][i]));
				}
			}
			
			if(!temp.size()){
				cout << 0 << "\n";
			}else{
				cout << nZ << " ";
				for(auto u : temp) cout << u.first << " ";
				cout << '\n';
				for(auto u : temp) cout << u.second << " ";
				cout << '\n';					
			}
		}
		cout << '\n';
	}

	return 0;
}