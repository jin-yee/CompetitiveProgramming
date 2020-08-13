#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)

using namespace std;

struct Book {
	string author, title;
	bool whichComeFirst(struct Book book) {
		return author < b.author || ((author == b.author) && (title < b.title));
	}
}book;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    return 0;
}