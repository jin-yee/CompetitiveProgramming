#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int p, g;
  string input;
  map<string, int> ballot;

  cin >> p >> g;
  for (int  i = 0; i < p ; i++) {
    string party;
    float vote;
    cin >> party >> vote;
    ballot.insert(pair<string, int> (party  , vote*10));
  }

  // not related just how to iterate value from a map
  // map<string,float>::iterator itr;
  // for(itr =  ballot.begin(); itr!= ballot.end(); itr++) {
  //  cout << itr->first << '\n';
  //  cout << itr->second << '\n';
  // }

  for (int i = 1; i <= g; i++) {
    int total = 0;
    while (true) {
      cin >> input;
      if (input[0] != '>' && input[0] != '<' && input[0] != '=') {
        if (input != "+") {
          total += ballot[input];
        }
      }
      else {
        float guess;
        bool isCorrect = false;
        cin >> guess;
        guess = int (guess * 10);
        if (input == "<")
          isCorrect = (total < guess);
        else if (input == ">")
          isCorrect = (total > guess);
        else if ( input == "<=")
          isCorrect = (total <= guess);
        else if ( input == ">=")
          isCorrect = (total >= guess);
        else 
          isCorrect = (total == guess);
        string answer = "correct.";
        if (!isCorrect) answer = "incorrect.";
        cout << "Guess #" << i << " was " << answer << '\n';
        // cout << total << input << guess << endl;
        break;
      }
    }
  }
}