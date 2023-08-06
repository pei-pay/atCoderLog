#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  int p[108];
  cin >> n;
  rep(i, n) cin >> p[i];


  int m = 0;
  for (int i = 1; i < n; i++) {
    m = max(m, p[i]);
  }

  if (p[0] == m) {
    cout << 1 << endl;
  }
  else if (p[0] > m) {
    cout << 0 << endl;
  }
  else {
    cout << m - p[0] + 1 << endl;
  }
  return 0;
}