#include <iostream>
using namespace std;

int main() {
  long long N, D;
  long long X[200009], Y[200009];
  bool used[200009]; // used[i]は仕事iを選んだかどうか
  long long Ans = 0;

  // 入力
  cin >> N >> D;
  for (int i = 1; i <= N; i++) {
    cin >> X[i] >> Y[i];
  }

  for (int i = 1; i <= D; i++) {
    long long maxValue = 0; // 給料の最大値
    long long maxID = -1; // 給料が最大となる仕事の番号
    for (int j = 1; j <= N; j++) {
      if (used[j] == true) continue;
      if (maxValue < Y[j] && X[j] <= i) {
        maxValue = Y[j];
        maxID = j;
      }
    }

    // 選べる仕事がある場合
    if (maxID != -1) {
      Ans += maxValue;
      used[maxID] = true;
    }
  }

  cout << Ans << endl;

  return 0;
}