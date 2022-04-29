#include <iostream>
#include <string>
// #include <algorithm>
using namespace std;

int ctoi(char c) {
  switch (c) {
    case '0':
      return 0;
    case '1':
      return 1;
    case '2':
      return 2;
    case '3':
      return 3;
    case '4':
      return 4;
    case '5':
      return 5;
    case '6':
      return 6;
    case '7':
      return 7;
    case '8':
      return 8;
    case '9':
      return 9;
    default:
      return 0;
  }
}

int main() {
  string S;
  cin >> S;
  int total = 0;

  for (int i = 0; i < 9; i++) {
    total += ctoi(S[i]);
  }
  cout << 45 - total << endl;
}

/**
 * 結果
 *  AC
 * https:// atcoder.jp/contests/abc248/submissions/31022548
 */