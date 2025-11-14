#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  const int n = 5;
  vi a(n);
  rep(i, n) cin >> a[i];

  // Count inversions. If exactly one inversion exists,
  // the array is obtainable by swapping one adjacent pair.
  int inv = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (a[i] > a[j]) ++inv;
    }
  }

  if (inv == 1) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}