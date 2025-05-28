#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, x;
  cin >> n >> x;

  x--;
  vi a(n);
  rep(i, n) {
    int z;
    cin >> z;
    z--;
    a[i] = z;
  }

  vi b(n, 0);

  int cnt = 0;
  int next = x;
  while (true) {
    if (b[next] == 1) {
      break;
    } else {
      b[next] = 1;
      cnt++;
      next = a[next];
    }
  }

  cout << cnt << endl;
  return 0;
}