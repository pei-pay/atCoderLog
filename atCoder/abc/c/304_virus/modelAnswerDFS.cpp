#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

long long n, d;
vector<long long> x, y;


bool is_connected(int i, int j) {
  long long dis = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
  return dis <= d * d;
}

void dfs(int v, vector<bool>& seen) {
  seen[v] = true;
  rep(v2, n) {
    if (seen[v2]) continue;
    if (is_connected(v, v2)) dfs(v2, seen);
  }
}

int main() {
  cin >> n >> d;
  x.resize(n), y.resize(n);

  rep(i, n) cin >> x[i] >> y[i];


  vector<bool> seen(n, false);
  dfs(0, seen);


  rep(i, n) {
    cout << (seen[i] ? "Yes" : "No") << endl;
  }

  return 0;
}