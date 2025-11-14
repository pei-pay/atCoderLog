#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

/*
 * WA
 */
int main() {
  int n = 5;
  vi a(n);
  rep(i, n) cin >> a[i];
  int before;
  int cnt = 0;
  rep(i, n) {
    if (i == 0) {
      before = a[i];
      continue;
    }
    if (before + 1 != a[i]) cnt++;
    before = a[i];
  }

  if (cnt == 3) cout << "Yes" << endl;
  else cout << "No" << endl;
}