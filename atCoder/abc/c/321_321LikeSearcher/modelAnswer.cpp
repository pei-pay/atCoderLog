#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int k;
  cin >> k;

  /**
   * 321-like numberをすべて求める
   *
   * a[k] = k番目の321-like number
  */
  vector<ll> a;

  /**
   * 321 like numberは2^10通りしかない
   * - {0,1,2,3,4,5,6,7,8,9} と10個の数字の組み合わせに1つずつ存在する
   * - たとえば{0,2,5}という部分集合を考えた時、520の1通りのみ
  */
  rep(s, 1 << 10) {
    ll x = 0;
    for (int i = 9; i >= 0; i--) {
      if (s >> i & 1) {
        x = x * 10 + i;
      }
    }
    // 0は321-like numberではないので省く
    if (x == 0) continue;
    a.push_back(x);
  }

  sort(a.begin(), a.end());
  cout << a[k - 1] << endl;

  return 0;
}