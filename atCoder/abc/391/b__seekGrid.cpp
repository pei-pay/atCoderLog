#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<char>> s(n, vector<char>(n)), t(m, vector<char>(m));
  rep(i, n) {
    rep(j, n) {
      cin >> s[i][j];
    }
  }
  rep(i, m) {
    rep(j, m) {
      cin >> t[i][j];
    }
  }

  rep(a, n) {
    rep(b, n) {
      bool flag = true;
      rep(i, m) {
        rep(j, m) {
          if (a + i <= n - 1 && b + j <= n - 1) {
            if (s[a + i][b + j] != t[i][j]) {
              flag = false;
            };
          } else {
            flag = false;
          }
        }
      }
      if (flag) {
        cout << a + 1 << " " << b + 1 << endl;
      }
    }
  }




  return 0;
}