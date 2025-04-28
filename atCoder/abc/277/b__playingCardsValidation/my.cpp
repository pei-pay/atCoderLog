#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  bool ans = true;

  set<char> X = { 'H', 'D', 'C', 'S' };
  set<char> Y = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K' };
  set<string> Z;

  rep(i, n) {
    char x = s[i][0];
    char y = s[i][1];
    if (!X.count(x)) ans = false;
    if (!Y.count(y)) ans = false;
    if(Z.count(s[i])) ans = false;
    else Z.insert(s[i]);
  }

  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}