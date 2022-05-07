#include <iostream>
using namespace std;

int N, A[110];
int ans = 0;

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) cin >> A[i];

  // 5つのカードの番号(i, j, k, l, m, n)を全探索
  // -> 100枚のカードから5枚を選ぶ方法は 100C5 = 75287520
  // 10^9通りより少ないので全探索で実行可能

  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      for (int k = j + 1; k < N; k++) {
        for (int l = k + 1; l < N; l++) {
          for (int m = l + 1; m < N; m++) {
            cout << i << j << k << l << m << endl;
            if (A[i] + A[j] + A[k] + A[l] + A[m] == 1000) ans++;
          }
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}