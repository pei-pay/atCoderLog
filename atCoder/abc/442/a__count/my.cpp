#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int ans = 0;
  rep(i, s.size()) {
    if(s[i] == 'i' || s[i] == 'j') ans++;
  }
  cout << ans << endl;
  return 0;
}