#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  bool done = false;
  rep(i, s.size()) {
    if (s[i] == '#') {
      done = false;
    } else {
      if(!done) s[i] = 'o';
      done = true;
    }
  }

  cout << s << endl;
  return 0;
}