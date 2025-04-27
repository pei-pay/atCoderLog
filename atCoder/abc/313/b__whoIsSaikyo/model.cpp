#include <iostream>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;

  set<int> st;
  for (int i = 1; i <= n; i++) st.insert(i);


  rep(i, m) {
    int a, b;
    cin >> a >> b;
    st.erase(b);
  }
  if (st.size() >= 2) cout << -1 << endl;
  else cout << *st.begin() << endl;

  return 0;
}