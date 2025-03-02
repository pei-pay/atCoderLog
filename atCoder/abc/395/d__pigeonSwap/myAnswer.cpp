#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, q;
  cin >> n >> q;
  // p[i] 鳩i がどの巣にいるか 0-indexed
  vector<int> p(n);
  // h[i] 巣i にどの鳩がいるか
  // vector<set<int>> h(n);
  vector<int> h(n);
  rep(i, n) p[i] == i;
  // rep(i, n) h[i].insert(i);
  rep(i, n) h[i] = i;
  rep(i, q) {
    int x;
    cin >> x;
    if (x == 1) {
      int a, b;
      cin >> a >> b;
      a--;
      b--;
      int old = p[a];
      p[a] = b;
      // h[old].erase(a);
      // h[b].insert(a);
      h[old] = -1;
      if (h[b] != -1) {

      }
      else {
        h[b] = a;
      }
    }
    else if (x == 2) {
      int a, b;
      cin >> a >> b;
      a--;
      b--;
      int ap = h[a];
      int bp = h[b];
      h[a] = bp;
      h[b] = ap;
      p[ap] = b;
      p[bp] = a;
    }
    else {
      int a;
      cin >> a;
      a--;
      cout << p[a] + 1 << endl;
    }
  }
  return 0;
}