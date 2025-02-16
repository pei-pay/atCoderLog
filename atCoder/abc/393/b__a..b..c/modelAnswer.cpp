#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      for (int k = j + 1; k < n; ++k) {
        if (j - i == k - j and s[i] == 'A' and s[j] == 'B' and s[k] == 'C') ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}