#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
  int N, K;
  cin >> N >> K;
  // 事象Aの余事象Bを求める
  long long complementaryEvent = 0;

  for(int a = 1; a <= N; a++) {
    for(int b = max(1, a-(K-1)); b <= min(N, a+(K-1)); b++) {
      for(int c = max(1, a-(K-1)); c <= min(N, a+(K-1)); c++) {
        if(abs(b - c) <= K-1) complementaryEvent += 1;
      }
    } 
  }

  // 事象Aのパターンの数 = 全体のパターン - 余事象B
  cout << (long long)N * N * N - complementaryEvent << endl;

  return 0;
}