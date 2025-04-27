#include <iostream>
#include <stack>
using namespace std;

bool solve() {
  string s;
  cin >> s;
  stack<char> st;
  auto pop = [&](char c) {
    if (st.size() == 0) return false;
    if (st.top() != c) return false;
    st.pop();
    return true;
    };
  for (char c : s) {
    if (c == ')') {
      if (!pop('(')) return false;
    }
    else if (c == ']') {
      if (!pop('[')) return false;
    }
    else if (c == '>') {
      if (!pop('<')) return false;
    }
    else {
      st.push(c);
    }
  }
  if (st.size() != 0) return false;
  else return true;
}

int main() {
  if (solve()) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}