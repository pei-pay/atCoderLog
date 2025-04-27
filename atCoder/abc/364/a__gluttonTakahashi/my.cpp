#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  string s[109];
  rep(i, n) cin >> s[i];
  rep(i, n) {
    if (i != n - 1 && s[i] == "sweet" && s[i + 1] == "sweet") {
      if (i != n - 2) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}