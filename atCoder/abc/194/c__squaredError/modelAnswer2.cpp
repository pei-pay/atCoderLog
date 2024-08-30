#include <iostream>
#include <vector>
using namespace std;

/**
 * 式変形して解くやり方
 * https://www.remma.net/?p=2957
*/
int main(void) {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  long long ans = 0;
  long long a1 = 0;
  long long a2 = 0;
  for (int i = 0; i < N; i++) {
    a1 += A[i] * A[i];
    a2 += A[i];
  }
  ans = N * a1 - a2 * a2;

  cout << ans << endl;

  return 0;
}