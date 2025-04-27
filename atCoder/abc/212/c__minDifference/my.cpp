#include <iostream>
#include <queue>
#include <climits>

using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  priority_queue<int> a;
  priority_queue<int> b;
  rep(i, n) {
    int x;
    cin >> x;
    a.push(x);
  }
  rep(i, m) {
    int x;
    cin >> x;
    b.push(x);
  };
  int ans = INT_MAX;
  while (!a.empty() && !b.empty()) {
    int x = a.top();
    int y = b.top();
    ans = min(ans, abs(x - y));
    if (x > y) {
      a.pop();
    }
    else {
      b.pop();
    }
  }
  cout << ans << endl;

  return 0;
}