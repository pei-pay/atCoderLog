#include <iostream>
#include <set>
#include <queue>
#include <cmath>
using namespace std;
#define rep1(i, n) for(int i = 1; i <= (n); ++i)


int n, d;
int x[2009], y[2009];
// 感染した人の番号を管理
set<int> s;
// 感染した人をqueueにpushしていく。
queue<int> q;

int main() {
  cin >> n >> d;
  rep1(i, n) cin >> x[i] >> y[i];

  q.push(1);
  s.insert(1);

  while (!q.empty()) {
    int pos = q.front();

    for (int i = 1; i <= n; i++) {
      // すでに感染してる人はスキップ
      if (s.count(i)) continue;

      if (sqrt((x[pos] - x[i]) * (x[pos] - x[i]) + (y[pos] - y[i]) * (y[pos] - y[i])) <= d) {
        q.push(i);
        s.insert(i);
      }
    }

    q.pop();
  }


  rep1(i, n) {
    if (s.count(i)) cout << "Yes" << endl;
    else cout << "No" << endl;
  }


  return 0;
}