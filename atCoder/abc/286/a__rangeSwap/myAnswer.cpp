#include <iostream>
using namespace std;

int N, P, Q, R, S;
int A[110];
int B[110];

int main() {
  cin >> N >> P >> Q >> R >> S;
  for (int i = 1; i <= N; i++) cin >> A[i];

  for (int i = 1; i <= N; i++) B[i] = 0;

  for (int i = P; i <= Q; i++) {
    B[R + i - P] = A[i];
  }
  for (int i = R; i <= S; i++) {
    B[P + i - R] = A[i];
  }

  for (int i = 1; i <= N; i++) {
    if (B[i] == 0) B[i] = A[i];
  }

  for (int i = 1; i <= N; i++) {
    cout << B[i];
    if (i != N) cout << " ";
  }
  cout << endl;

  return 0;
}