#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int q;
  cin >> q;
  vector<int> st(100, 0);
  rep(i, q) {
    int type;
    cin >> type;
    if (type == 1) {
      int x;
      cin >> x;
      st.push_back(x);
    } else {
      int ans = st.back();
      st.pop_back();
      cout << ans << endl;
    }
  }
  return 0;
}