#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


struct UnionFind {
  vector<int> par;

  UnionFind() {}
  UnionFind(int n) : par(n, -1) {}
  void init(int n) { par.assign(n, -1); }


  int root(int x) {
    if (par[x] < 0) return x;
    else return par[x] = root(par[x]);
  }

  bool same(int x, int y) {
    return root(x) == root(y);
  }

  bool merge(int x, int y) {
    x = root(x), y = root(y);
    if (x == y) return false;
    if (par[x] > par[y]) swap(x, y);
    par[x] += par[y];
    par[y] = x;
    return true;
  }

  int size(int x) {
    return -par[root(x)];
  }

  // debug
  friend ostream& operator << (ostream& s, UnionFind uf) {
    map<int, vector<int>> groups;
    for (int i = 0; i < uf.par.size(); ++i) {
      int r = uf.root(i);
      groups[r].push_back(i);
    }
    for (const auto& it : groups) {
      s << "group: ";
      for (auto v : it.second) s << v << " ";
      s << endl;
    }
    return s;
  }
};

int main() {
  long long n, d;
  cin >> n >> d;
  vector<long long> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  auto is_connected = [&](int i, int j) -> bool {
    long long dis = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
    return dis <= d * d;
  };

  UnionFind uf(n);

  rep(i, n) {
    for (int j = i + 1; j < n; j++) {
      if (is_connected(i, j)) uf.merge(i, j);
    }
  }

  rep(i, n) {
    cout << (uf.same(0, i) ? "Yes" : "No") << endl;
  }

  return 0;
}