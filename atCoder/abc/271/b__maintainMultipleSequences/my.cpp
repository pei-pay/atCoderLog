#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, q;
  cin >> n >> q;
  vector<vector<int>> a(n);
  rep(i, n) {
    int l;
    cin >> l;
    a[i].resize(l);
    rep(j, l) {
      cin >> a[i][j];
    }
  }

  rep(i, q) {
    int s, t;
    cin >> s >> t;
    s--;t--;
    cout << a[s][t] << "\n";
  }

  return 0;
}