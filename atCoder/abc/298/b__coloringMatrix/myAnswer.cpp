#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

/*
* 不正解
*
* ループの置き換えで、置き換え元の配列を直接操作してしまってた。
* その為、うまく値が更新されず、失敗。
* 別の値を使うべきだった
*/

int N;
int A[109][109], B[109][109];
int main() {
  // 入力
  cin >> N;
  rep1(i, N) {
    rep1(j, N) cin >> A[i][j];
  }
  rep1(i, N) {
    rep1(j, N) cin >> B[i][j];
  }

  int cnt = 0;
  bool ans = true;
  while (cnt < 3) {
    rep1(i, N) {
      rep1(j, N) {
        if (A[i][j] == 1 && B[i][j] == 0) {
          ans = false;
          break;
        }
      }
      if (ans) continue;
      else break;
    }
    if (ans == true) {
      break;
    };
    rep1(i, N) {
      rep1(j, N) {
        int x = A[N + 1 - j][i];
        int y = A[i][j];
        A[i][j] = x;
        A[N + 1 - j][i] = y;
      }
    }
    cnt++;
  }

  if (ans) cout << "Yes" << "\n";
  else cout << "No" << "\n";

  return 0;
}