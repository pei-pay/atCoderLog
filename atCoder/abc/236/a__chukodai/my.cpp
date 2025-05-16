#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int a, b;
  cin >> a >> b;
  a--;b--;

  rep(i, s.size()) {
    if(i == a) cout << s[b];
    else if(i == b) cout << s[a];
    else cout << s[i];
  }
  cout << endl;
  return 0;
}