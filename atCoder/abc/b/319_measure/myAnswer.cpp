#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;

  rep(i, n + 1) {
    priority_queue<int, vector<int>, greater<int>> v;
    rep(j, 9) {
      if (n % (j + 1) == 0 && i % (n / (j + 1)) == 0) {
        v.push(j + 1);
      }
    }
    if (v.empty()) cout << '-';
    else cout << v.top();
  }
  cout << endl;

  return 0;
}