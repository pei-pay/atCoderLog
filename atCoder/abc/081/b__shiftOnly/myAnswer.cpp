#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int ans = 0;
  bool isEven = true;

  while (isEven) {
    rep(i, n) {
      if (a[i] % 2 != 0) {
        isEven = false;
        break;
      }
    }
    if (!isEven) cout << ans << endl;
    else {
      rep(i, n) {
        a[i] /= 2;
      }
      ans++;
    }
  }




  return 0;
}