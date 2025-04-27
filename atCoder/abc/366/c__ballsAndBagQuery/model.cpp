#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int q;
  cin >> q;
  vector<int> cnt(1000000); // cnt[i]=(現時点で (i + 1) が書かれたボールが袋の中に何個あるか
  int ans = 0; // 現時点での袋の中のボールに書いてある数の種類数

  rep(i, q) {
    int t;
    cin >> t;
    if (t == 1) {
      int x;
      cin >> x;
      x--;
      cnt[x]++;
      if (cnt[x] == 1) ans++; // このとき x が書かれたボールが追加された1個のみである
    }
    else if (t == 2) {
      int x;
      cin >> x;
      x--;
      cnt[x]--;
      if (cnt[x] == 0) ans--;
    }
    else {
      cout << ans << "\n"; // このとき x が書かれたボールが袋の中にはもうない
    }
  }

  return 0;
}