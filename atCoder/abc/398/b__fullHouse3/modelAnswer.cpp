#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n = 7;
  vi a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  do {
    if (a[0] != a[1]) continue;
    if (a[1] == a[2]) continue;
    if (a[2] != a[3]) continue;
    if (a[3] != a[4]) continue;
    cout << "Yes" << endl;
    return 0;
  } while (next_permutation(a.begin(), a.end()));
  cout << "No" << endl;
  return 0;
}