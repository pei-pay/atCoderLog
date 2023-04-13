#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  int N, D, T[109];
  cin >> N >> D;
  rep1(i, N) cin >> T[i];

  rep1(i, N - 1) {
    if (T[i + 1] - T[i] <= D) {
      cout << T[i + 1] << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}