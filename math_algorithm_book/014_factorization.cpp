#include <iostream>
using namespace std;

// 素因数分解
int main() {
  long long n;
  cin >> n;

  /**
   * 空白区切りで出力するために、数字を出力する際に、trueにしておく
   * flagがtrueなら、次の数字を出力する前に" "を出力する
   */
  bool flag = false;

  // 2以上√N 以下の約数を見ていく
  for (long long i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      if (flag == true) cout << " ";
      flag = true;
      n /= i;
      cout << i;
    }
  }

  /**
   * √N 以上の素数が存在する場合のハンドリング
   * √N 以上の素数は最高ても1つしか存在し得ないので、ループを回す必要なし
   */
  if (n >= 2) {
    if (flag == true) cout << " ";
    flag = true;
    cout << n;
  }

  cout << endl;

  return 0;
}