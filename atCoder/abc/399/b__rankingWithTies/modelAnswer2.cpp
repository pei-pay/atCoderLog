#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi p(n);
  rep(i, n) cin >> p[i];

  /* 人 i の順位は、人 i よりも真に得点が高い人の数に 1 を足したもの */
  rep(i, n) {
    int rank = 1;
    rep(j, n) {
      if(p[j] > p[i]) rank++; // 人 i よりも得点が高い人の数だけ rank をプラス
    }
    cout << rank << "\n";
  }
  return 0;
}