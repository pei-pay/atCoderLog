#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  set<int> as;
  set<int> bs;
  int x = 0, y = 0;
  rep(i, n) {
    if (a[i] == b[i]) x++;
    else {
      if (as.count(b[i])) y++;
      if (bs.count(a[i])) y++;
      as.insert(a[i]);
      bs.insert(b[i]);
    }
  }

  cout << x << "\n";
  cout << y << "\n";
  return 0;
}