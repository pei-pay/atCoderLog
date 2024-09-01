#include <iostream>
using namespace std;

long long N;
long long A[200009];
// 100,200,300,400円 の商品がそれぞれいくつあるかを管理
long long a = 0, b = 0, c = 0, d = 0;

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) cin >> A[i];

  // a, b, c, d の個数を数える
  for (int i = 0; i < N; i++) {
    if (A[i] == 100) a++;
    if (A[i] == 200) b++;
    if (A[i] == 300) c++;
    if (A[i] == 400) d++;
  }

  // 100円と400円の組み合わせ + 200円と300円の組み合わせ が答え
  cout << a * d + b * c << endl;
  return 0;
}