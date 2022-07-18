#include <iostream>
using namespace std;

long long GCD(long long A, long long B) {
  while(A >= 1 && B >= 1) {
    if(A < B) B = B % A;
    else A = A % B;
  }

  if(A >= 1) return A;
  return B;
}

long long LCM(long long A, long long B) {
  return (A / GCD(A, B)) * B;
}

int main() {
  int N;
  long long A[100010];
  cin >> N;
  for(int i = 0; i < N; i++) cin >> A[i];

  long long R = LCM(A[0], A[1]);

  for(int i = 2; i < N; i++) {
    R = LCM(R, A[i]);
  }

  cout << R << endl;
  return 0;
}