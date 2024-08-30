#include <iostream>
using namespace std;
int N, Q;
long long A[100010];
long long R[100010], S[100010], T[100010];

int main() {
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> A[i];
  cin >> Q;
  for (int i = 1; i <= Q; i++) {
    cin >> R[i] >> S[i];
    if (R[i] == 1) cin >> T[i];
  }

  for (int i = 1; i <= Q; i++) {
    if (R[i] == 1) {
      A[S[i]] = T[i];
    }
    else {
      cout << A[S[i]] << endl;
    }
  }

  return 0;
}