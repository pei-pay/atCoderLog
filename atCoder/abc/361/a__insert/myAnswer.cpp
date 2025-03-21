#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, k, x;
  cin >> n >> k >> x;
  vi a(n);
  rep(i, n) cin >> a[i];

  rep(i, n) {
    if (i + 1 == k) {
      cout << a[i] << " " << x << " ";
    }
    else cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}