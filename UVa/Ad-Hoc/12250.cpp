#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char hello[14];
    int counter = 1;
    cin >> hello;

    while(strcmp(hello, "#")){
    	if(!strcmp(hello, "HELLO")){
    		cout << "Case " << counter << ": " << "ENGLISH" << endl;
    	}else if(!strcmp(hello, "HOLA")){
    		cout << "Case " << counter << ": " << "SPANISH" << endl;
    	}else if(!strcmp(hello, "HALLO")){
    		cout << "Case " << counter << ": " << "GERMAN" << endl;
    	}else if(!strcmp(hello, "BONJOUR")){
    		cout << "Case " << counter << ": " << "FRENCH" << endl;
    	}else if(!strcmp(hello, "CIAO")){
    		cout << "Case " << counter << ": " << "ITALIAN" << endl;
    	}else if(!strcmp(hello, "ZDRAVSTVUJTE")){
    		cout << "Case " << counter << ": " << "RUSSIAN" << endl;
    	}else{
    		cout << "Case " << counter << ": " << "UNKNOWN" << endl;
    	}
    	counter++;
    	cin >> hello;
    }
    return 0;
}