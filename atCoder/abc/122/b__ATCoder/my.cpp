#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  string x = "ACGT";
  int ans = 0;
  int z = 0;
  rep(i, s.size()) {
    if (x.find(s[i]) != string::npos) {
      z++;
      ans = max(ans, z);
    }
    else {
      z = 0;
    }
  }
  cout << ans << endl;
  return 0;
}