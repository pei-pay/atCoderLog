#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int func(int x) {
  int sum = 0;
  while (x != 0) {
    sum += x % 10;
    x /= 10;
  }
  return sum;
}

int main() {
  int n;
  cin >> n;
  vi a(110);
  a[0] = 1;
  rep(i, n + 1) {
    if (i == 0) continue;
    rep(j, i) {
      a[i] += func(a[i - j - 1]);
    }
  }
  cout << a[n] << endl;
  return 0;
}