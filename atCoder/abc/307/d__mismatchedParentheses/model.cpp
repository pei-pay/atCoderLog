#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;

  vector<string> st; // stack

  // 初期値として空文字を挿入しておく
  st.push_back("");

  /*
   *  例  a(bc))(の場合
   *
   *  1. 'a': 初期値として入れた空文字の要素に'a'を足す            ->  ["a"]
   *  2. '(': 新たな要素としてstackに'('を追加                     ->  ["a", "("]
   *  3. 'b : stackの末尾の要素に'b'を足す                         -> ["a", "(b"]
   *  4. 'c': stackの末尾の要素に'b'を足す                         -> ["a", "(bc"]
   *  5. ')': stackのsizeが1ではないので、stackの末尾の要素削除    -> ["a"]
   *  6. ')': stackのsizeが1なので、stackの末尾の要素に')'を足す   -> ["a)"]
   *  7. '(': 新たな要素としてstackに'('を追加                     -> ["a)", "("]
  */
  for (char c : s) {
    if (c == '(') {
      //  開き括弧の場合は要素を追加。閉じ括弧以外の文字の場合はこの要素に文字を足していく
      st.push_back("(");
    }
    else if (c == ')') {
      if (st.size() == 1) st.back() += c;
      else st.pop_back();
    }
    else {
      st.back() += c;
    }
  }

  // 最後にstackの要素を前から足していって出力
  string ans;
  for (string t : st) ans += t;
  cout << ans << endl;

  return 0;
}