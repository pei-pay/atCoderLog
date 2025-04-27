#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> t(n); // 技iを習得するのに必要な時間 t[i]
  vector<int> k(n); // 技iを習得するのに必要な技の数 k[i]
  vector<vector<int>> a(n); // 技iを習得するに必要なj番目の技 a[i][j]
  rep(i, n) {
    cin >> t[i] >> k[i];
    a[i].resize(k[i]);
    rep(j, k[i]) {
      cin >> a[i][j];
    }
  }

  vector<long long> sumT(n); // 技iを取得する為に必要な総時間 sumT[i];
  rep(i, n) {
    sumT[i] += t[i];
    rep(j, k[i]) {
      int x = a[i][j];
      x--;
      sumT[i] += sumT[x];
    }
  }
  cout << sumT[n - 1] << endl;
  return 0;
}