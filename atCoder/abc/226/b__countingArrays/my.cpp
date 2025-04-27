#include <iostream>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

/**
 * TLE
 * 
 * 文字列の連結操作、比較はパフォーマンスが悪い
 */
int main() {
  // input
  int n;
  cin >> n;
  set<string> st;
  rep(i, n) {
    int l;
    cin >> l;
    string s;
    rep(j, l) {
      char c;
      cin >> c;
      s += c;
    }
    st.insert(s);
  }

  // output
  cout << st.size() << endl;
  return 0;
}