#include <algorithm>
#include <iostream>
using namespace std;

// 配列の二分探索

int N;
long X, A[100010];

int main() {
  // 入力
  cin >> N >> X;
  for (int i = 0; i < N; i++) cin >> A[i];

  // まずソートする
  sort(A + 1, A + N + 1);

  // 二分探索
  int left = 1, right = N;
  while (left <= right) {
    int mid = (left + right) / 2;  // 探索範囲の中央で分割する
    if (A[mid] == X) {
      cout << "Yes" << endl;
      return 0;
    }
    if (A[mid] > X) right = mid - 1;  // 探索ぶぶんを後半部分に絞る
    if (A[mid] < X) left = mid + 1;   // 探索部分を前半部分に絞る
  }

  // 探索範囲がなくなっても"Yes"とならなければ、No
  cout << "No" << endl;
  return 0;
}