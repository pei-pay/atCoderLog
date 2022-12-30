#include <iostream>
using namespace std;

int N, Q;
int A[100010];
int L[100010], R[100010];
int S[100010], T[100010];
int main() {
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> A[i];
  cin >> Q;
  for (int i = 1; i <= Q; i++) cin >> L[i] >> R[i];

  S[0], T[0] = 0;
  for (int i = 1; i <= N; i++) {
    if (A[i] == 1) {
      S[i] = S[i - 1] + 1;
      T[i] = T[i - 1];
    }
    else {
      S[i] = S[i - 1];
      T[i] = T[i - 1] + 1;
    }
  }

  for (int i = 1; i <= Q; i++) {
    int win = S[R[i]] - S[L[i] - 1];
    int lose = T[R[i]] - T[L[i] - 1];
    if (win > lose)  cout << "win" << endl;
    else if (win < lose) cout << "lose" << endl;
    else cout << "draw" << endl;
  }
  return 0;
}