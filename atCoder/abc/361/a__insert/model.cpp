#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, k, x;
  cin >> n >> k >> x;
  rep(i, n) {
    int a;
    cin >> a;
    if (i != 0) cout << " ";
    cout << a;
    if (i == k - 1) cout << " " << x;
  } cout << "\n";
  return 0;
}