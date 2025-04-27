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
  int m = 13;
  vi cnt(m + 1);
  for (int x : a) cnt[x]++;

  sort(cnt.rbegin(), cnt.rend());

  if (cnt[0] >= 3 && cnt[1] >= 2) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}