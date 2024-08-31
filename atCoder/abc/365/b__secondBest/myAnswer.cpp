#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int m = 0;
  int m2 = 0;
  int x1 = 0;
  int x2 = 0;

  rep(i, n) {
    if (m < a[i]) {
      m2 = m;
      x2 = x1;
      m = a[i];
      x1 = i;
    }
    else if (m2 < a[i]) {
      m2 = a[i];
      x2 = i;
    }
  }

  cout << x2 + 1 << endl;

  return 0;
}