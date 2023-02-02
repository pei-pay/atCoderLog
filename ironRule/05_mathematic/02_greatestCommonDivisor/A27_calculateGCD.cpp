#include <iostream>
using namespace std;

int GCD(int a, int b) {
  if (b == 0) return a;
  return GCD(b, a % b);
}
int main() {
  int A, B;
  cin >> A >> B;
  if (A >= B) {
    cout << GCD(A, B) << endl;
  }
  else {
    cout << GCD(B, A) << endl;
  }
  return 0;
}