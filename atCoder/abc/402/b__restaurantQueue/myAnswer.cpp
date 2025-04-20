#include <iostream>
#include <queue>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int q;
  cin >> q;
  queue<int> que;
  rep(i, q) {
    int type;
    cin >> type;
    if (type == 1) {
      int x;
      cin >> x;
      que.push(x);
    }
    else {
      int ans = que.front();
      cout << ans << "\n";
      que.pop();
    }
  }

  return 0;
}