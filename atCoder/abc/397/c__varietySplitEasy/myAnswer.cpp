#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

/**
 * WA
 * 
 * 急用のため中断
 */
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int max = 0;

  set<int> st;
  rep(i, n) {
    if (st.count(a[i])) {

    }
    else {
      st.insert(a[i]);
    }
  }

  return 0;
}