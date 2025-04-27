#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> p(n), q(n);
  // i が見つめている人 p[i]
  rep(i, n) cin >> p[i];
  // i が着ているゼッケン q[i]
  rep(i, n) cin >> q[i];
  // i のゼッケンを来ている人
  vector<int> x(n);
  rep(i, n) {
    x[q[i] - 1] = i + 1;
  }
  // i のゼッケンを着ている人が見ている人
  vector<int> y(n);
  rep(i, n) {
    y[i] = p[x[i] - 1];
  }
  // i のゼッケンを着ている人が見ている人が来ているゼッケン
  vector<int> a(n);
  rep(i, n) {
    a[i] = q[y[i] - 1];
  }
  // 出力
  rep(i, n) cout << a[i] << " ";
  cout << endl;
  return 0;
}