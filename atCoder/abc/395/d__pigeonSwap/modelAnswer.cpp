#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> p2b(n);
  vector<int> b2h(n);
  vector<int> h2b(n);
  rep(i, n) p2b[i] = i;
  rep(i, n) b2h[i] = i;
  rep(i, n) h2b[i] = i;
  rep(qi, q) {
    int type;
    cin >> type;
    if(type == 1) {
      int a,b;
      cin >> a >> b;
      a--; b--;
      p2b[a] = h2b[b];
    } else if (type == 2) {
      int a, b;
      cin >> a >> b;
      a--;b--;
      swap(h2b[a], h2b[b]);
      b2h[h2b[a]] = a;
      b2h[h2b[b]] = b;
    } else {
      int a;
      cin >> a;
      a--;
      int ans = b2h[p2b[a]];
      cout << ans + 1 << '\n';
    }
  }
  return 0;
}