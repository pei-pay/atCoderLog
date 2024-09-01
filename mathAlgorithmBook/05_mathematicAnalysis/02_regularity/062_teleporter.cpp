#include <iostream>
using namespace std;

long long N, K;
long long A[200009];
// 最初に街 u に訪れた時: First[u]
// 2回目に街 u に訪れた時: Second[u]
long long First[200009], Second[200009];

int main() {

  // 入力
  cin >> N >> K;
  for(int i = 1; i <= N; i++) cin >> A[i];

  // 配列の初期化
  for(int i = 1; i <= N; i++) First[i] = -1;
  for(int i = 1; i <= N; i++) Second[i] = -1;

  // 答えを求める
  // cnt はテレポート回数
  // cur は現在いる町の番号
  long long cnt = 0, cur = 1;
  while(true) {
    if (First[cur] == -1) First[cur] = cnt;
    else if(Second[cur] == -1) Second[cur] = cnt;

    // 一巡目でK回のテレポートがcurの街で終わる場合
    if (cnt == K) {
      cout << cur << endl;
      return 0;
    // 2巡目でK回のテレポートがcurの街で終わる場合
    } else if (Second[cur] != -1 && (K - First[cur]) % (Second[cur] - First[cur]) == 0) {
      cout << cur << endl;
      return 0;
    }

    // 位置の更新
    cur = A[cur];
    cnt += 1;
  }

  return 0;
}