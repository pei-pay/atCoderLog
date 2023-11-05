#include <iostream>
using namespace std;
#define rep(i, n) for(long long i = 0; i < (n); ++i)

int main() {
  long long b;
  cin >> b;

  rep(i, 20) {
    long long s = i;
    rep(j, i - 1) {
      s *= i;
    }
    if (s == b) {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;
}