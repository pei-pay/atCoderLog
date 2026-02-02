#include <iostream>
using namespace std;

int calc(int n) {
  int res = 0;
  while (n > 0) {
    int x = n % 10;
    res += (x * x);
    n /= 10;
  }
  return res;
}

int main() {
  int n;
  cin >> n;
  int x = calc(n);
  while (x >= 10) {
    x = calc(x);
  }
  if(x == 1) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}