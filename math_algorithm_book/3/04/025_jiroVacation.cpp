#include <iostream>
using namespace std;

int N, A[200009], B[200009];
double Answer = 0.0;

int main() {
  cin >> N;
  for(int i = 0; i < N; i++) cin >> A[i];
  for(int i = 0; i < N; i++) cin >> B[i];

  for(int i = 0; i < N; i++) {
    Answer += 2.0 * A[i] / 6 + 4.0 * B[i] / 6;
  }

  printf("%.12lf\n", Answer);
  return 0;
}
