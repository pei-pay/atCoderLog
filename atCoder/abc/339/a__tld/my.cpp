#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;

  string ans;
  for(int i = s.size() -1; i >= 0; --i) {
    if(s[i] == '.') {
      for(int i = ans.size() -1; i >= 0; --i) {
        cout << ans[i];
      }
      cout << endl;
      return 0;
    } else {
      ans += s[i];
    }
  }
  return 0;
}