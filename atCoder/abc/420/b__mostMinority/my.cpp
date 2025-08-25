#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  vector<int> a(n, 0);

  rep(mi, m) {
    int x = 0, y = 0;
    rep(ni, n) {
      if (s[ni][mi] == '0') x++;
      else y++;
    }
    if (x == 0 || y == 0) {
      rep(ni, n) a[ni]++;
    } else if (x < y) {
      rep(ni, n) {
        if(s[ni][mi] == '0') a[ni]++;
      }
    } else {
      rep(ni, n) {
        if(s[ni][mi] == '1') a[ni]++;
      }
    }
  }

  int mx = 0;
  rep(i, n) {
    mx = max(a[i], mx);
  }

  rep(i, n) {
    if(mx == a[i]) cout << i + 1 << " ";
  }
  cout << endl;
  return 0;
}