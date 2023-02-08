#include <iostream>
using namespace std;

/*
 * 単純な解法
 * しかしオーバーフローしてしまう
*/
// int main() {
//   long long N, A[100009]; char T[100009];
//   cin >> N;
//   for (int i = 1; i <= N; i++) cin >> T[i] >> A[i];

//   long long Answer = 0;
//   for (int i = 1; i <= N; i++) {
//     if (T[i] == '+') Answer += A[i];
//     if (T[i] == '-') Answer -= A[i];
//     if (T[i] == '*') Answer *= A[i];

//     cout << Answer % 10000 << endl;
//   }

//   return 0;
// }

/*
 * 工夫した解法
*/
int main() {
  long long N, A[100009]; char T[100009];
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> T[i] >> A[i];

  long long Answer = 0;
  for (int i = 1; i <= N; i++) {
    if (T[i] == '+') Answer += A[i];
    if (T[i] == '-') Answer -= A[i];
    if (T[i] == '*') Answer *= A[i];

    // 引き算で0以下になった場合
    if (Answer < 0) Answer += 10000;
    // ここで余りをとっている
    Answer %= 10000;
    cout << Answer << endl;
  }

  return 0;
}