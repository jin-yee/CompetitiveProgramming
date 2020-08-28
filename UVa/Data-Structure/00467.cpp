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
    int o;
    while(cin>>o){
    	//cout << o;
    	int byte1, byte2, byte3, byte4;
    	byte1 = (0xff000000&o) >> 24;
    	byte2 = (0x00ff0000&o) >> 8;
    	byte3 = (0x0000ff00&o) << 8;
    	byte4 = (0x000000ff&o) << 24;
    	cout << o << " converts to " << byte1 + byte2 + byte3 + byte4 << endl;
    }

    return 0;
}