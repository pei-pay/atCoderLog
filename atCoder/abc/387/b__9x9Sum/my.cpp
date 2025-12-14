#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int x;
  cin >> x;
  int n = 9;
  int sum = 0;
  rep(i, n) {
    rep(j, n) {
      int ij = (i + 1) * (j + 1);
      if (ij != x) sum += ij;
    }
  }

  cout << sum << endl;
  return 0;
}