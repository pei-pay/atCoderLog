#include <bits/stdc++.h>
using namespace std;
int main(void) {
  string S;
  // 0〜9それぞれに対してフラグを持っておく
  bool flag[10];
  // フラグ初期化
  for (int i = 0; i < 10; i++) flag[i] = true;
  cin >> S;
  // string Sで登場しているか確認
  for (int i = 0; i < 9; i++) flag[((int)(S[i] - '0'))] = false;
  // なかったものを出力
  for (int i = 0; i < 10; i++)
    if (flag[i]) cout << i << endl;
  return 0;
}