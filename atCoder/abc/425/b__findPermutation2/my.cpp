#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];

  vi p(n, 0);

  rep(i, n) {
    if (a[i] != -1) {
      p[i] = a[i];
    }
  }

  rep(i, n) {
    bool found = false;
    rep(j, n) {
      if (p[j] == i + 1) found = true;
    }
    if (found) p[i] = i + 1;
  }

  rep(i, n) {
    if (p[i] == 0) {
      cout << "No" << endl;
      return 0;
    }
  }


  cout << "Yes" << endl;
  rep(i, n) {
    cout << p[i] << " ";
  }
  cout << endl;

  return 0;
}