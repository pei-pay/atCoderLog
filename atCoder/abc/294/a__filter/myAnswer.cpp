#include <iostream>
using namespace std;

int main() {
  int N;
  int A[110];
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> A[i];
  for (int i = 1; i <= N; i++) {
    if (A[i] % 2 == 0) cout << A[i] << " ";
  }
  cout << endl;

  return 0;
}