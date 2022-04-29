#include <bits/stdc++.h>
using namespace std;

// a〜bの総和を求める
int sum_range(int a, int b) {
  // ベースケース
  if (a == b) return a;
  // 再起ステップ
  return sum_range(a, b - 1) + b;
}

int main() {
  cout << sum_range(0, 4) << endl;
  cout << sum_range(5, 8) << endl;
}