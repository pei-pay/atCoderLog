#include <iostream>
using namespace std;

/**
 * 「エラトステネスのふるい」を用いた解法
 *
 * 計算量はO(N log log N)
*/

int Q, X[10009], N = 300000; // X[i] <= 300000 なので、300000以下の約数を列挙
bool Deleted[300009]; // 整数xが消されている限り、Deleted[x] = true にする

int main() {
  cin >> Q;
  for (int i = 1; i <= Q; i++) cin >> X[i];
  for (int i = 2; i <= N; i++) Deleted[i] = false;

  /**
   * エラトステネスのふるい
   */
  for (int i = 2; i * i <= N; i++) {
    if (Deleted[i] == true) continue;
    for (int j = i * 2; j <= N; j += i) Deleted[j] = true;
  }

  for (int i = 1; i <= Q; i++) {
    if (Deleted[X[i]] == false) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}