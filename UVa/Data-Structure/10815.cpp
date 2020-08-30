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

	string word;
	set<string> s;
	string temp;

	while(cin >> word){
		temp = "";
		for(unsigned long int i = 0; i < word.length(); i++){
			char ch = word[i];
			ch = tolower(ch);
			if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
				temp += ch;
			else if (temp != ""){
				s.insert(temp);
				temp = "";
			}
		}
		if(temp != "") s.insert(temp);
	}

	for(auto u : s){
		cout << u << endl;
	}

	return 0;
}