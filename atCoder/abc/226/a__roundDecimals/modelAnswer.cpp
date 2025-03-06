#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string x;
  int a;
  int ans = 0;
  cin >> x;
  int n = x.size();
  rep(i, n - 4) {
    a = int(x[i] - '0');
    ans = 10 * ans + a;
  }
  if (x[n - 3] >= '5') ans++; // 最後から3文字目('.'の直後)が5以上なら繰り上げ
  cout << ans << endl;
  return 0;
}