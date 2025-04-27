#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m, p;
  cin >> n >> m >> p;

  int cnt = 0;
  int x = 0;
  while (true) {
    if (m + x * p <= n) {
      cnt++;
      x++;
    }
    else break;
  }

  cout << cnt << endl;
  return 0;
}