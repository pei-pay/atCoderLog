#include <iostream>
using namespace std;

int N, Q;
int A[100010];
int L[100010], R[100010];
int S[100010];

int main() {
  cin >> N >> Q;
  for (int i = 1; i <= N; i++) cin >> A[i];
  for (int i = 1; i <= Q; i++) {
    cin >> L[i] >> R[i];
  }

  S[0] = 0;
  for (int i = 1; i <= N; i++) {
    S[i] = S[i - 1] + A[i];
  }
  for (int i = 1; i <= Q; i++) {
    cout << S[R[i]] - S[L[i] - 1] << endl;
  }

  return 0;
}