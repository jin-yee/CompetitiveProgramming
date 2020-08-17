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

#define ll long long
#define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)

using namespace std;

//create a custom sort, author first, then book name
struct Book{
	string title, author;
	bool operator < (const Book& book){
		return author < book.author || ((author == book.author) && title < book.title);
	}
}book;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	vector<Book> bk;
	map<string, int>bookIdMapping;

	while(getline(cin,s) && s[0] != 'E'){
		int i = s.find('"', 1);
		book.title = s.substr(1,i-1);
		book.author = s.substr(i+5);
		bk.push_back(book);
	}

	sort(bk.begin(), bk.end());

	set<int> lib, ret; //the state of book, in library and returned

	//Assign each book with a id and 
	//initially all the books are in library
	for(int i = 0; i < bk.size(); i++){
		bookIdMapping[bk[i].title] = i; //assign id::
		lib.insert(i); //book in the library, unique id::
	}

	while(getline(cin,s) && s[0] != 'E'){
		string title;
		if(s[0] != 'S'){
			title = s.substr(8,s.size()-8-1);
		}

		if(s[0]=='R'){
			lib.insert(bookIdMapping[title]);
			ret.insert(bookIdMapping[title]);
		}else if(s[0] == 'B'){
			lib.erase(bookIdMapping[title]);
		}else if(s[0] == 'S'){
			for(auto r : ret){
				auto p = lib.find(r);
				printf("Put \"%s\" ", bk[r].title.c_str());
				printf("%s\n", p == lib.begin() ? "first" : ("after \"" + bk[*(--p)].title + "\"").c_str());
			}
			puts("END"); ret.clear(); //after returned all book to shelve, rmb to clear state!
			continue;
		}
	}
	return 0;
}