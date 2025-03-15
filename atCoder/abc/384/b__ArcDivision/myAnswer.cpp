#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, r;
  cin >> n >> r;
  vector<int> d(n), a(n);
  rep(i, n) cin >> d[i] >> a[i];

  int x = r;
  rep(i, n) {
    if (d[i] == 1) {
      if (1600 <= x && x <= 2799) {
        x += a[i];
      }
    }
    else {
      if (1200 <= x && x <= 2399) {
        x += a[i];
      }
    }
  }

  cout << x << endl;

  return 0;
}