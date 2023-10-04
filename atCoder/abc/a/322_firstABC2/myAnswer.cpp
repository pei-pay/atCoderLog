#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  rep(i, n) {
    if (i + 1 >= n) break;
    if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}