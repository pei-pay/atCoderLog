#include <iostream>
using namespace std;
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  int N, M;
  int a[59][59];

  cin >> N >> M;
  rep1(i, M) {
    rep1(j, N) {
      cin >> a[i][j];
    }
  }

  bool x[59][59];
  rep1(i, M) {
    rep1(j, N) {
      x[i][j] = false;
    }
  }

  rep1(i, M) {
    rep1(j, N) {
      if (j - 1 > 0) {
        x[a[i][j]][a[i][j - 1]] = true;
      }
      if (j + 1 <= N) {
        x[a[i][j]][a[i][j + 1]] = true;
      }
    }
  }


  int ans = 0;
  rep1(i, N) {
    rep1(j, N) {
      if (i == j) continue;
      if (i > j) continue;
      if (x[i][j] == false) {
        ans++;
      }
    }
  }

  cout << ans << endl;
  return 0;
}