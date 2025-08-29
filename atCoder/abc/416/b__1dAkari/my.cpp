#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  string t = "";
  rep(i, s.size()) t += 'o';
  rep(i, s.size()) {
    if(s[i] == '#') t[i] = '#';
  }

  rep(i, t.size() - 1) {
    if(t[i] == 'o' && t[i + 1] == 'o') {
      t[i] = '.';
    }
  }
  cout << t << endl;
  return 0;
}