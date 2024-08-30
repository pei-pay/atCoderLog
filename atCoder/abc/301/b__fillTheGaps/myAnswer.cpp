#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int N, A[109];
int main() {
  cin >> N;
  rep1(i, N) cin >> A[i];

  vector<int> Z;
  Z.push_back(A[1]);

  for (int i = 1; i <= N - 1; i++) {
    if (abs(A[i] - A[i + 1]) == 1) {
      Z.push_back(A[i + 1]);
    }
    else if (A[i] < A[i + 1]) {
      for (int j = A[i] + 1; j <= A[i + 1]; j++) {
        Z.push_back(j);
      }
    }
    else {
      for (int j = A[i] - 1; j >= A[i + 1]; j--) {
        Z.push_back(j);
      }
    }
  }

  rep(i, Z.size()) {
    if (i != 0) cout << " ";
    cout << Z[i];
  }
  cout << '\n';

  return 0;
}