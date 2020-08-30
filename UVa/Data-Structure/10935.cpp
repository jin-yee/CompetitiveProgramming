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
#define D "Discarded cards: "
#define R "Remaining card: "


using namespace std;

int main() {

	int n;
	queue<int> q;
	queue<int> dqed;

	while(scanf("%d", &n) && n != 0){
		//store in queue
		for(int i = 1; i <= n; i++) q.push(i);
		while(q.size() > 1){
			dqed.push(q.front());
			q.pop();
			q.push(q.front());
			q.pop();
		}
		printf("%s", D);
		while(!dqed.empty()){
			if(dqed.size() == 1)
				printf("%d\n", dqed.front());
			else
				printf("%d, ", dqed.front());
			dqed.pop();
		}

		printf("%s%d\n", R, q.front());
		q.pop();
	}

	return 0;
}