#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

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
  while (cnt < 4) {
    ans = true;
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
    if (ans) {
      break;
    };
    int res[109][109];
    rep1(i, N) {
      rep1(j, N) {
        res[i][j] = A[N + 1 - j][i];
      }
    }
    rep1(i, N) {
      rep1(j, N) {
        A[i][j] = res[i][j];
      }
    }
    cnt++;
  }

  if (ans) cout << "Yes" << "\n";
  else cout << "No" << "\n";

  return 0;
}