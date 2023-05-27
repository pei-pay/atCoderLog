#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int N, A, B, C[20009];

int main() {
  cin >> N >> A >> B;

  rep1(i, N) cin >> C[i];

  rep1(i, N) {
    if (C[i] == A + B) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}