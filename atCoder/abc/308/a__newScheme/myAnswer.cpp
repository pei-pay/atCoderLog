#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int s[10];
int main() {
  rep(i, 8) cin >> s[i];


  int ans = true;
  rep(i, 8) {
    if (i + 1 < 8 && s[i] > s[i + 1]) {
      ans = false;
    }
    if (s[i] < 100 || s[i] > 675) {
      ans = false;
    }
    if (s[i] % 25 != 0) {
      ans = false;
    }
  }

  if (ans) cout << "Yes" << endl;
  else   cout << "No" << endl;

  return 0;
}