#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int k, g, m;
  cin >> k >> g >> m;


  int glass = 0;
  int mug = 0;
  rep(i, k) {
    if (glass == g) {
      glass = 0;
    }
    else if (mug == 0) {
      mug = m;
    }
    else {
      if (glass + mug <= g) {
        glass += mug;
        mug = 0;
      }
      else {
        mug -= g - glass;
        glass = g;
      }
    }
  }

  cout << glass << " " << mug << endl;
  return 0;
}