#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  int n;
  cin >> n;
  int ans = 0;
  rep(i, n) {
    if (i <= 9) {
      ans++;
    }
    else if (100 <= i && i <= 999) {
      ans++;
    }
    else if (10000 <= i && i <= 99999) {
      ans++;
    }
  }
  cout << ans << endl;


  return 0;
}