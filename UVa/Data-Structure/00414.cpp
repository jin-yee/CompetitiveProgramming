/******************************************
* AUTHOR : JinYee *
* EMAIL : jinyee97@gmail.com *
  _____      _               _   _             
 / ____|    | |             | | (_)            
| (___   ___| |__   __ _ ___| |_ _  __ _ _ __  
 \___ \ / _ \ '_ \ / _` / __| __| |/ _` | '_ \ 
 ____) |  __/ |_) | (_| \__ \ |_| | (_| | | | |
|_____/ \___|_.__/ \__,_|___/\__|_|\__,_|_| |_|
******************************************/

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string line;
	int numLine;
	
	

	while(cin >> numLine, numLine != 0){
		cin.ignore();
		if(numLine == 1){
			cout << 0 << endl;
		}else{
			int xcount[numLine];
			int maxx = -99;
			int result = 0;
			for(int i = 0; i < numLine; i++){
				getline(cin, line);
				int numx = count(line.begin(), line.end(), 'X');
				if(numx > maxx) maxx = numx;
				xcount[i] = numx;
			}

			for(int i = 0; i < numLine; i++){
				if(maxx != xcount[i]) result += (maxx-xcount[i]);
			}

			cout << result << endl;	
		}

	}
	return 0;
}