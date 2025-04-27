#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int result = 0;
  while(true) {
    int cout = 0;
    rep(i, n) {
      if (a[i] > 0) cout++;
    }
    if (cout <= 1) break;

    result++;
    sort(a.rbegin(), a.rend());
    a[0]--;
    a[1]--;
  }

  cout << result << endl;

  return 0;
}