#include <iostream>
using namespace std;

int T, N;
int L[500009], R[500009];
int B[500009];
int Ans[500009];
int main() {
  cin >> T;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> L[i] >> R[i];
  }

  for (int i = 0; i <= T; i++) B[i] = 0;
  for (int i = 1; i <= N; i++) {
    B[L[i]] += 1;
    B[R[i]] -= 1;
  }

  Ans[0] = B[0];
  for (int i = 1; i < T; i++) {
    Ans[i] = Ans[i - 1] + B[i];
  }
  for (int i = 0; i < T; i++) {
    cout << Ans[i] << endl;
  }

  return 0;
}