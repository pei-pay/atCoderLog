#include <iostream>
using namespace std;

// aのb乗を m で割った余りを返す関数
long long Power(long long a, long long b, long long m) {
  long long p = a, Answer = 1;
  for (int i = 0; i < 30; i++) {
    int wari = (1 << i);
    if (b / wari % 2 == 1) {
      Answer = (Answer * p) % m;
    }
    p = (p * p) % m;
  }
  return Answer;
}

// a % b を m で割った余りを返す関数
long long Division(long long a, long long b, long long m) {
  return (a * Power(b, m - 2, m)) % m;
}
// nCr mod 1000000007  を返す関数
long long nCr(long long n, long long r) {
  const long long M = 1000000007;
  long long a = 1;
  for (int i = 1; i <= n; i++) a = (a * i) % M;

  long long b = 1;
  for (int i = 1; i <= r; i++) b = (b * i) % M;
  for (int i = 1; i <= n - r; i++) b = (b * i) % M;

  return Division(a, b, M);
}

int main() {
  long long H, W;
  cin >> H >> W;

  cout << nCr(H + W - 2, W - 1) << endl;
  return 0;
}