#include <iostream>
#include <stack>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int l, r;
  string s;
  cin >> l >> r >> s;

  stack<char> st;
  rep(i, l - 1) {
    cout << s[i];
  }
  for (int i = l - 1; i < r; i++) {
    st.push(s[i]);
  }
  while(!st.empty()) {
    cout << st.top();
    st.pop();
  }
  for(int i = r; i < s.size(); i++) {
    cout << s[i];
  }
  cout << endl;

  return 0;
}