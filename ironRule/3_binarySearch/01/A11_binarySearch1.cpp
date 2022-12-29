#include <iostream>
using namespace std;

int N, X;
int A[100009];

int binarySearch(int x) {
  int L = 1, R = N;
  while (L <= R) {
    int M = (L + R) / 2;
    if (A[M] < x) {
      L = M + 1;
    }
    else if (A[M] > x) {
      R = M - 1;
    }
    else {
      return M;
    }
  }
  return -1;
}


int main() {
  cin >> N >> X;
  for (int i = 1; i <= N; i++) cin >> A[i];

  cout << binarySearch(X) << endl;
  return 0;
}