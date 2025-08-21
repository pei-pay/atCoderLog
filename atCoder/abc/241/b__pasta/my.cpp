#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, m;
  cin >> n >> m;
  vi a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];

  rep(i, m) {
    bool found = false;
    rep(j, n) {
      if(b[i] == a[j]) {
        a[j] = 0;
        found = true;
        break;
      }
    }
    if (!found) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}