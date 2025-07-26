#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, x;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];
  cin >> x;

  rep(i, n) {
    if (a[i] == x) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;

  return 0;
}