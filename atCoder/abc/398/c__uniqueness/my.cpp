#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];
  set<int> st; // 数の集合
  set<int> stno; // 条件を満たさない数の集合
  rep(i, n) {
    if (st.count(a[i])) {
      stno.insert(a[i]);
    }
    else {
      st.insert(a[i]);
    }
  }
  int m = 0;
  int ans = -1;
  rep(i, n) {
    if (stno.count(a[i])) continue;
    else {
      if (m < a[i]) {
        m = a[i];
        ans = i + 1;
      }
    }
  }

  cout << ans << endl;
  return 0;
}