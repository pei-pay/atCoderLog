#include <iostream>
using namespace std;

int D, N;
int L[100010], R[100010];
int B[100010];
int Answers[100010];
int main() {
  cin >> D >> N;
  for (int i = 1; i <= N; i++) {
    cin >> L[i] >> R[i];
  }

  for (int i = 1; i <= N; i++) {
    B[L[i]] += 1;
    B[R[i] + 1] -= 1;
  }

  Answers[0] = 0;

  for (int i = 1; i <= D; i++) Answers[i] = Answers[i - 1] + B[i];
  for (int i = 1; i <= D; i++) cout << Answers[i] << endl;

  return 0;
}