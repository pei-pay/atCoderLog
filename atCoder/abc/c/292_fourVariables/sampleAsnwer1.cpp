#include <iostream>
using namespace std;

/*
*  AB + CD = NとなるABCDの組み合わせ

*  O(N√N)の解法
*/
int main() {
  int N;
  cin >> N;

  long long ans = 0;

  for (int i = 1; i < N; i++) {
    // X=AB, Y=CD
    int X = i, Y = N - i;
    // x: ABとなる組み合わせの数
    // y: CDとなる組み合わせの数
    long long x = 0, y = 0;

    for (int j = 1; j * j <= X; j++) {
      // Nは正整数なので、Xはjで割り切れる必要がある
      if (X % j == 0) {
        x++;
        // ABが同じ数でない場合は、組み合わせが前後で変わるので+1
        if (X != j * j) x++;
      }
    }
    // yの計算も上記xを求める計算と同様
    for (int j = 1; j * j <= Y; j++) {
      if (Y % j == 0) {
        y++;
        if (Y != j * j) y++;
      }
    }
    /*
     * xとyの組み合わせを掛け合わせれば答えとなる
     * AB+CD=Nとならない場合は、yが0の値なので、ansには0が足されるだけ
    */
    ans += x * y;
  }

  cout << ans << endl;

  return 0;
}