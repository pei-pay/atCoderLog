#include <iostream>
#include <stack>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int q;
  cin >> q;
  stack<int> s;
  rep(i, 100) {
    s.push(0);
  }
  rep(i, q) {
    int type;
    cin >> type;
    if (type == 1) {
      int x;
      cin >> x;
      s.push(x);
    }
    else {
      int a = s.top();
      s.pop();
      cout << a << "\n";
    }
  }

  return 0;
}