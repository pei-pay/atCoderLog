#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)


long long n, d;
vector<long long> x, y;

bool is_connected(int i, int j) {
  long long dis = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
  return dis <= d * d;
}

void bfs(int s, vector<int>& dist) {
  queue<int> que;
  dist[s] = 0;
  que.push(s);

  while (!que.empty()) {
    int v = que.front();
    que.pop();

    rep(v2, n) {
      if (dist[v2] != -1 || !is_connected(v, v2)) continue;
      dist[v2] = dist[v] + 1;
      que.push(v2);
    }

  }
}

int main() {
  cin >> n >> d;
  x.resize(n), y.resize(n);
  rep(i, n) cin >> x[i] >> y[i];


  vector<int> dist(n, -1);
  bfs(0, dist);


  rep(i, n) {
    cout << (dist[i] != -1 ? "Yes" : "No") << endl;
  }

  return 0;
}