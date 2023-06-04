#include <iostream>
#include <map>
using namespace std;
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int N, T;
int C[200009], R[200009];
int main() {
  // 入力
  cin >> N >> T;
  rep1(i, N) {
    cin >> C[i];
  }
  rep1(i, N) {
    cin >> R[i];
  }

  /*
   * map[i].first =  i色のカード最大値
   * map[i].second = i色カードの最大値を出したプレイヤーの番号
  */
  map<int, pair<int, int>> cm;

  // 各色の最大値を出したプレイヤーの番号を算出
  rep1(i, N) {
    if (cm[C[i]].first < R[i]) {
      cm[C[i]].first = R[i];
      cm[C[i]].second = i;
    }
  }

  // T色が出されたか出されてないかで色分け
  if (cm[T].first == 0) {
    cout << cm[C[1]].second << endl;
  }
  else {
    cout << cm[T].second << endl;
  }

  return 0;
}