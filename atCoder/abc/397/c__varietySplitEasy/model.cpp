#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> numl(n + 1), numr(n + 1);
  {
    unordered_set<int> st;
    rep(i, n) {
      st.insert(a[i]);
      numl[i + 1] = st.size();
    }
  }
  {
    unordered_set<int> st;
    for (int i = n - 1; i >= 0; i--) {
      st.insert(a[i]);
      numr[i] = st.size();
    }
  }

  int ans = 0;
  for (int i = 1; i < n; i++) {
    ans = max(ans, numl[i] + numr[i]);
  }
  cout << ans << endl;
  return 0;
}