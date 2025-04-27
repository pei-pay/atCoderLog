#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  int maxA = -1001001001, maxB = -1001001001;
  rep(i, n) {
    maxA = max(maxA, a[i]);
    maxB = max(maxB, b[i]);
  }

  cout << maxA + maxB << endl;
  return 0;
}