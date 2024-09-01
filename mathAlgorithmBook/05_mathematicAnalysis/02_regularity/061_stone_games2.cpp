#include <iostream>
using namespace std;

int main() {
  long long N;
  cin >> N;

  // N = 2のk乗 - 1 で表せれるか調べる
  bool flag = false;
  for (int k = 0; k <= 60; k++) {
    if (N == (1LL << k) - 1LL) flag = true;
  }


  if (flag) cout << "Second" << endl;
  else cout << "First" << endl;

  return 0;
}