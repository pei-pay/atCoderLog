#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int a, b;
  cin >> a >> b;
  vi x(3, 0);
  x[a - 1] = 1;
  x[b - 1] = 1;

  int cnt = 0;
  int ans = 0;
  rep(i, 3) {
    if (x[i] == 0) {
      cnt++;
      ans = i + 1;
    }
  }

  if (cnt == 1) cout << ans << endl;
  else cout << -1 << endl;
  return 0;
}