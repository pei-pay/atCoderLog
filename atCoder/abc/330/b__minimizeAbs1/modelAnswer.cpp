#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

/*
 * 敗因: 場合分によって答えが求まることに気づけなかった。2分探索で解こうとしていた。
*/
int main() {
  int n, l, r;
  cin >> n >> l >> r;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  rep(i, n) {
    if (a[i] < l) cout << l;
    else if (a[i] > r) cout << r;
    else cout << a[i];
    cout << " ";
  }
  cout << endl;

  return 0;
}