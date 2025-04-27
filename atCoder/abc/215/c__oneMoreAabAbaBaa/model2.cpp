#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


set<string> st; // 重複を省くために set を使う
/**
 * s: 現在構築中の文字列 (部分的に完成した順列)
 * cs: 残りの使用可能な文字列 (まだ順列に追加されてない文字列)
 */
void dfs(string s, string cs) {
  if (cs == "") {
    st.insert(s); // 残り使える文字がなければ set に入れる
  }
  rep(i, cs.size()) {
    string ncs = cs;
    ncs.erase(ncs.begin() + i); // i番目を削除
    dfs(s + cs[i], ncs); // i 番目を s に追加, 残りの文字で再起
  }
}
int main() {
  string s;
  int k;
  cin >> s >> k;
  dfs("", s);
  vector<string> ss;
  for (string t : st) ss.push_back(t); // set を vector に詰め直す
  sort(ss.begin(), ss.end()); // 辞書順にする
  cout << ss[k - 1] << endl; // 指定された順番の文字を出力
  return 0;
}