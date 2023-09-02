#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  int n, h, x;
  int p[109];

  cin >> n >> h >> x;
  rep(i, n) cin >> p[i];

  rep(i, n) {
    if (h + p[i] >= x) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}