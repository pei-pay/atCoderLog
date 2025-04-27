#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  /**
   * ans1 = a,b を普通に買う
   * ans2 = ab を買えるだけ買って多いほうを足るまで買う
   * ans3 = ab のみで完結する
   */
  int ans1, ans2, ans3;
  ans1 = a * x + b * y;
  if (x > y) ans2 = c * y * 2 + a * (x - y);
  else ans2 = c * x * 2 + b * (y - x);
  ans3 = c * max(x, y) * 2;
  cout << min({ ans1,ans2,ans3 }) << endl;
  return 0;
}