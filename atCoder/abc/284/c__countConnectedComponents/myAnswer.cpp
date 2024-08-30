#include <iostream>
#include <vector>
using namespace std;

/**
 * アプローチ2 -> failed
 * lengthがNの配列xを持っておく
 * 要素は全部1で初期化しておく
 * eg) N = 5の場合
 * [1, 1, 1, 1, 1]
 *
 * x[v[i]]を0にする
 *
 * xの要素の内、1であるものを数え上げてそれを答えとする
*/

int N, M;
int u[50000], v[50000];
int x[110];
int ans = 0;
vector<int> a[50000];
int main() {
  cin >> N >> M;
  for (int i = 1; i <= M; i++) {
    cin >> u[i] >> v[i];
  }

  for (int i = 1; i <= N; i++) x[i] = 1;



  for (int i = 1; i <= M; i++) {
    a[u[i]].push_back(v[i]);
  }

  for (int i = 1; i <= N; i++) {
    for (int j : a[i]) {
      x[j] = 0;
    }
  }

  for (int i = 1; i <= N; i++) {
    if (x[i] == 1) ans++;
  }

  cout << ans << endl;

  return 0;
}