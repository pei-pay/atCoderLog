#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int p, q, x, y;
  cin >> p >> q;
  cin >> x >> y;

  bool yes = false;
  rep(xi, 100) { 
    rep(yi, 100) {
      if(p + xi == x && q + yi == y) {
        yes = true;
      } 
    }
  }
  if(yes) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}