#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, l, r;
  cin >> n >> l >> r;
  rep(i, l - 1) {
    cout << i + 1 << " ";
  }
  for (int i = r; i >= l; --i) {
    cout << i << " ";
  }
  for (int i = r; i < n; ++i) {
    cout << i + 1 << " ";
  }
  cout << endl;
  return 0;
}