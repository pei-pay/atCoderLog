#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, k, x;
  cin >> n >> k >> x;
  vi a(n + 1);
  rep(i, n) cin >> a[i];

  a.insert(a.begin() + k, x);
  rep(i, n + 1) cout << a[i] << " ";
  cout << endl;
  return 0;
}