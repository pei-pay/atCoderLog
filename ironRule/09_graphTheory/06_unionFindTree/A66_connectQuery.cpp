#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)


class UnionFind {
public:
  // par[i]: 頂点iの親
  int par[100009];
  // siz[i]: 「頂点iを根とする木」の頂点数
  int siz[100009];

  // N頂点の Union-Find を作成
  void init(int N) {
    for (int i = 1; i <= N; i++) par[i] = -1;
    for (int i = 1; i <= N; i++) siz[i] = 1;
  }

  // 頂点 x の根を返す関数
  int root(int x) {
    while (true) {
      if (par[x] == -1) break; // 1個先(親)がなければここが頂点
      x = par[x]; // 1個先(親)に進む
    }
    return x;
  }

  // 頂点 u と v 統合する関数
  void unite(int u, int v) {
    int RootU = root(u);
    int RootV = root(v);

    if (RootU == RootV) return; // u と v が同じグループなら処理を行わない

    if (siz[RootU] < siz[RootV]) {
      par[RootU] == RootV;
      siz[RootV] = siz[RootU] + siz[RootV];
    }
    else {
      par[RootV] = RootU;
      siz[RootU] = siz[RootU] + siz[RootV];
    }
  }

  // 頂点uとvが同一のグループかどうかを返す関数
  bool same(int u, int v) {
    if (root(u) == root(v)) return true;
    return false;
  }
};


int N, Q;
int Query[100009], u[100009], v[100009];

int main() {
  cin >> N >> Q;
  rep1(i, Q) cin >> Query[i] >> u[i] >> v[i];

  UnionFind UF;
  UF.init(N);

  rep1(i, Q) {
    if (Query[i] == 1) {
      UF.unite(u[i], v[i]);
    }
    if (Query[i] == 2) {
      if (UF.same(u[i], v[i]) == true) cout << "Yes" << '\n';
      else cout << "No" << '\n';
    }
  }

  return 0;
}