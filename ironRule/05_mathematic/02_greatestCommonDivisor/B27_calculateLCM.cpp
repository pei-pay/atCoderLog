#include <iostream>
using namespace std;


long long GCD(long long a, long long b) {
  if (b == 0) return a;
  return GCD(b, a % b);
}
long long LCM(long long a, long long b) {
  return a * b / GCD(a, b);
}
int main() {
  long long A, B;
  cin >> A >> B;
  if (A >= B) cout << LCM(A, B) << endl;
  else cout << LCM(B, A) << endl;

  return 0;
}