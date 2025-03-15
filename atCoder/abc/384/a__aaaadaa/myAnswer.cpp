#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  char c1, c2;
  string s;
  cin >> n >> c1 >> c2;
  cin >> s;
  rep(i, n) {
    if(s[i] == c1) continue;
    else s[i] = c2;
  }
  cout << s << endl;
  return 0;
}