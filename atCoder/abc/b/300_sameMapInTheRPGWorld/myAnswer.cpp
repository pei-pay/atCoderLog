#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int H, W;
char A[39][39], B[39][39];
int main() {
  // 入力
  cin >> H >> W;
  rep1(i, H) {
    rep1(j, W) {
      cin >> A[i][j];
    }
  }
  rep1(i, H) {
    rep1(j, W) {
      cin >> B[i][j];
    }
  }

  rep(y, H) {
    rep(x, W) {
      bool same = true;
      rep1(i, H) {
        rep1(j, W) {
          int p = i - y > 0 ? i - y : i - y + H;
          int q = j - x > 0 ? j - x : j - x + W;
          if (A[p][q] != B[i][j]) {
            same = false;
            break;
          }
        }
        if (!same) break;
      }
      if (same) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}