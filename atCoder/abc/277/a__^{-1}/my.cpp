#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, x;
  cin >> n >> x;
  vi p(n);
  rep(i, n) cin >> p[i];

  rep(i, n) {
    if (p[i] == x) cout << i + 1 << endl;
  }

  return 0;
}