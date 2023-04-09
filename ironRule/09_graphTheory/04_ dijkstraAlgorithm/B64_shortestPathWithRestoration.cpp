#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rep1(i, n) for(int i = 1; i <= (n); i++)

int N, M;
int A[100009], B[100009], C[100009];
vector<pair<int, int>> G[100009];

// cur[i]の値は頂点iまでの最短距離
int cur[100009];
// kakutei[i]は頂点iまでの最短距離が決定しているかどうか
bool kakutei[100009];

/**
 * 優先度付きキュー: Q
 *
 * 現時点での各頂点までの最初距離を管理するために用いる
 * ```cpp
 * int minCost = Q.top.first
 * int pos = Q.top().second
 * ```
 * 上記のように現時点で最短距離'minCost'で移動することができる頂点`pos`を求めることができる
*/
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;

int main() {
  // 入力
  cin >> N >> M;
  rep1(i, M) {
    cin >> A[i] >> B[i] >> C[i];
    // グラフの作成
    G[A[i]].push_back(make_pair(B[i], C[i]));
    G[B[i]].push_back(make_pair(A[i], C[i]));
  }

  // 初期化
  rep1(i, N) {
    cur[i] = 2000000000; // ありえないぐらい大きな値にしておく
    kakutei[i] = false;
  }

  // スタート地点の値で初期化
  cur[1] = 0;
  Q.push(make_pair(cur[1], 1));


  /**
   * ダイクストラ法
   *
   * 各頂点までの最短距離を求める
  */
  while (!Q.empty()) {
    int pos = Q.top().second; // 現時点で最短で移動可能な頂点pos
    Q.pop(); // 次のループの対象から外すために、posを除外しておく

    if (kakutei[pos] == true) continue;

    kakutei[pos] = true; // Q.top().secondでposが求められたことから頂点posは最短だと確定。kakutei[pos]をtrueにして次回以降の計算をしないようにする

    rep(i, G[pos].size()) {
      int next = G[pos][i].first;    // posから到達可能な次の頂点next
      int cost = G[pos][i].second;   // posからnextまでにかかる距離

      /**
       * 頂点1から頂点nextまでの現時点での最短距離`cur[next]`が、
       * 頂点1からposを通ってnextへ移動する距離`cur[pos] + next`よりも大きい場合
       * cur[next]の値を更新する
      */
      if (cur[next] > cur[pos] + cost) {
        cur[next] = cur[pos] + cost;
        // Qに次のループで調べる値を入れておく
        Q.push(make_pair(cur[next], next));
      }
    }
  }

  /**
   * 頂点Nまでの最短経路の復元
   *
   * placeは現在の位置。ゴールから出発。
  */
  vector<int> ans;
  int place = N;

  while (true) {
    ans.push_back(place);

    if (place == 1) break;

    rep(i, G[place].size()) {
      int next = G[place][i].first;
      int cost = G[place][i].second;

      if (cur[next] + cost == cur[place]) {
        place = next;
        break;
      }
    }
  }

  reverse(ans.begin(), ans.end());

  rep(i, ans.size()) {
    if (i >= 1) cout << " ";
    cout << ans[i];
  }

  cout << endl;

  return 0;
}