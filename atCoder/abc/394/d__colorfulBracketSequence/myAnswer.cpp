#include <iostream>
#include <set>
#include <stack>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  set<int> a; // ()
  set<int> b; // []
  set<int> c; // <>
  bool ok = true;
  stack<int> stack;
  rep(i, s.size()) {
    if (s[i] == '(') {
      a.insert(i);
      stack.push(i);
    }
    else if (s[i] == '[') {
      b.insert(i);
      stack.push(i);
    }
    else if (s[i] == '<') {
      c.insert(i);
      stack.push(i);
    }
    else if (s[i] == ')') {
      if (a.count(stack.top())) {
        a.erase(stack.top());
        stack.pop();
      }
      else {
        ok = false;
        break;
      }
    }
    else if (s[i] == ']') {
      if (b.count(stack.top())) {
        b.erase(stack.top());
        stack.pop();
      }
      else {
        ok = false;
        break;
      }
    }
    else if (s[i] == '>') {
      if (c.count(stack.top())) {
        c.erase(stack.top());
        stack.pop();
      }
      else {
        ok = false;
        break;
      }
    }
  }

  if (ok && a.size() == 0 && b.size() == 0 && c.size() == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}