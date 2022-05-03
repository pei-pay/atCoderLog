#include <iostream>
// #include <string>
// #include <algorithm>
using namespace std;

// 素数判定

// N が合成数であれば、2以上√N 以下の約数が存在する(背理法を使って証明できる)
// -> Nが素数なら、2以上√N以下の素数が存在しない
bool isPrime(long long N) {
  for (long long i = 2; i * i <= N; i++) {
    if (N % i == 0) return false;
  }
  return true;
}

int main() {
  long long n;
  cin >> n;
  if (isPrime(n)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  };
  return 0;
}