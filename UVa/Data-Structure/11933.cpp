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

//6 - 0110 - a 0010 b 0100
//7 - 0111 - a 0101 b 0010
//13- 1101 - a 1001 b 0100

int main() {
	int n, a, b, countOne, shiftPos;

	while(scanf("%d", &n)){
		if(n == 0) break;
		shiftPos = 0;
		countOne = 0;
		a = 0, b = 0;
		while(n > 0){
			if(1 & n){
				countOne++; //have to add here if not condition does not match
				if(countOne % 2 == 0) // i2, i4, i6...
					b = b | (1 << shiftPos);
				else // i1, i3, i5...
					a = a | (1 << shiftPos);

			}
			shiftPos = shiftPos + 1;
			n = n >> 1;
		}
		printf("%d %d\n", a, b);
	}

	
	return 0;
}