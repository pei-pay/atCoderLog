#include <iostream>
using namespace std;

int N, M, A[110], B[110];
int main() {
  cin >> N >> M;
  for (int i = 1; i <= N; i++) cin >> A[i];
  for (int i = 1; i <= M; i++) cin >> B[i];

  int total = 0;
  for (int i = 1; i <= M; i++) {
    total += A[B[i]];
  }

  cout << total << endl;
  return 0;
}