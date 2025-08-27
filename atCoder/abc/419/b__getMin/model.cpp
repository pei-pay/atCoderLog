#include <iostream>
#include <queue>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int q;
  cin >> q;
  priority_queue<int, vector<int>, greater<int>> pq;
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int x;
      cin >> x;
      pq.push(x);
    }
    else {
      int x = pq.top();
      pq.pop();
      cout << x << "\n";
    }
  }
  return 0;
}