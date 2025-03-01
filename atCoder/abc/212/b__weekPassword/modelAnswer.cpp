#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  bool same = true;
  bool step = true;
  rep(i, 3) {
    if (s[i] != s[i + 1]) same = false;
    int a = s[i] - '0';
    int b = s[i + 1] - '0';
    if ((a + 1) % 10 != b) step = false;
  }
  if (same || step) cout << "Weak" << endl;
  else cout << "Strong" << endl;
  return 0;
}