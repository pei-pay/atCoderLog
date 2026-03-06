#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int ans = 0;
  string t = string(k, 'O');
  for (int i = 0; i < n - k + 1; ++i) {
    if (s.substr(i, k) == t) {
      ans++;
      for (int j = i; j < i + k; j++) {
        s[j] = 'X';
      }
    }
  }
  cout << ans << endl;
  return 0;
}