#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i <= (n); ++i)

int main() {
  int n, y;
  cin >> n >> y;

  rep(a, n) {
    rep(b, n - a) {
      int c = n - a - b; 
      if (10000 * a + 5000 * b + 1000 * c == y) {
        cout << a << " " << b << " " << c << endl;
        return 0;
      }
    }
  }

  cout << -1 << " " << -1 << " " << -1 << endl;

  return 0;
}