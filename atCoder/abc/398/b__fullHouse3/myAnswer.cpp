#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  vi a(7);
  rep(i, 7) cin >> a[i];
  vi b(14, 0);
  rep(i, 7) {
    b[a[i]]++;
  }
  bool ans = false;
  bool ans2 = false;
  rep(i, 14) {
    if (ans == false && b[i] >= 3) {
      ans = true;
    }
    else if (b[i] >= 2) {
      ans2 = true;
    }
  }

  if (ans && ans2) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}