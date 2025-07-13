#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, l, r;
  cin >> n >> l >> r;
  vi x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  int cnt = 0;
  rep(i, n) {
    if(x[i] <= l && y[i] >= r) {
      cnt++;
    }
  }

  cout << cnt << endl;
  return 0;
}