#include <iostream>
using namespace std;

/*
*  nCr を求める
*  nCr = n! / (r!(n - r)!)
*/

// aのb乗をmで割った余りを返す関数
long long Power(long long a, long long b, long long m) {
  long long p = a, answer = 1;
  for (int i = 0; i < 30; i++) {
    int wari = (1 << i);
    if ((b / wari) % 2 == 1) {
      answer = (answer * p) % m;
    }
    p = (p * p) % m;
  }
  return answer;
}

// a / b を m で割った余りを返す関数
long long Division(long long a, long long b, long long m) {
  return (a * Power(b, m - 2, m)) % m;
}

int main() {
  const long long M = 1000000007;
  long long n, r;
  cin >> n >> r;

  // 分子を求める
  long long a = 1;
  for (int i = 1; i <= n; i++) a = (a * i) % M;

  // 分母を求める
  long long b = 1;
  for (int i = 1; i <= r; i++) b = (b * i) % M;
  for (int i = 1; i <= n - r; i++) b = (b * i) % M;

  cout << Division(a, b, M) << endl;

  return 0;
}