#include <iostream>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  set<int> st;
  rep(i, 3) {
    int x;
    cin >> x;
    st.insert(x);
  }

  if (st.size() <= 2) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}