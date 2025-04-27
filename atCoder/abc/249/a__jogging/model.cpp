#include <iostream>
using namespace std;

int calcMeter(int a, int b, int c, int x) {
  // p: 歩きと休みを繰り返した回数
  // r: 余り
  int p = x / (a + b), r = x % (a + b);
  // 歩いた秒数
  int s = p * +min(r, a);

  return s * c;
}

int main() {
  int a, b, c, d, e, f, x;
  cin >> a >> b >> c >> d >> e >> f >> x;
  int T = calcMeter(a, b, c, x);
  int A = calcMeter(d, e, f, x);

  if (T > A) {
    cout << "Takahashi" << endl;
  } else if (T < A) {
    cout << "Aoki" << endl;
  } else {
    cout << "Draw" << endl;
  }
  return 0;
}