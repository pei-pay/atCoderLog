#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;


/**
 * cntは各文字の出現回数を管理するための配列で、
 * cnt[0]が1つ目の文字列、cnt[1]が2つ目の文字列に対応。
 * cntの要素は文字のASCIIコードに対応した位置にカウントを格納。
*/
int cnt[2][256];
char s[2][200010];
const char* t = "atcoder";

int main() {
  // 文字列を入力として受け取り。1つ目の文字列はs[0]に、2つ目の文字列はs[1]に格納。
  cin >> s[0] >> s[1];

  // 各文字の出現回数を数える
  for (int i = 0; s[0][i]; i++) {
    cnt[0][s[0][i]]++;
    cnt[1][s[1][i]]++;
  }

  /**
  * 文字列中の特定の文字（@）を他の文字（a, t, c, o, d, e, r）に置き換える操作を行う。
  * forループを使用して、t配列の要素（'a', 't', 'c', 'o', 'd', 'e', 'r'）を順番に処理。
  *
  * 各要素に対して、cnt[0]とcnt[1]から最大の出現回数（M）を求める。
  * 再びforループを使用して、cnt[0]とcnt[1]の対応する要素をMに合わせるために、@の数を調整。
 */
  for (int i = 0; i < 7; i++) {
    int M = max(cnt[0][t[i]], cnt[1][t[i]]);
    for (int j = 0; j < 2; j++) {
      cnt[j]['@'] -= M - cnt[j][t[i]];
      cnt[j][t[i]] = M;
    }
  }

  /**
   * すべての置き換え操作が終了したら、ansという変数に勝利条件を満たしているかどうかを格納。
   * まず、cnt[0]['@']が0以上であることを確認し、
   * それ以外の文字の出現回数が両方の文字列で等しいことを確認。
   * 最後に、ansが1であれば、ゲームに勝てると判定される。
  */
  int ans = cnt[0]['@'] >= 0;
  for (int i = 0; i < 256; i++) {
    ans &= cnt[0][i] == cnt[1][i];
  }
  cout << (ans ? "Yes" : "No") << endl;

  return 0;
}
