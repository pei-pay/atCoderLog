#include <iostream>
using namespace std;

long long Power(long long a, long long b, long long m) {
  long long p = a, answer = 1;
  for (int i = 0; i < 60; i++) {
    long long wari = (1LL << i);
    if ((b / wari) % 2 == 1) {
      answer = (answer * p) % m;
    }
    p = (p * p) % m;
  }
  return answer;
}
int main() {
  long long A, B;
  cin >> A >> B;

  cout << Power(A, B, 1000000007) << endl;
  return 0;
}