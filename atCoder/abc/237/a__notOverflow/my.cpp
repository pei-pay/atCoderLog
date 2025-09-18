#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  long long n, min = -2, max = 2;
  cin >> n;

  rep(i, 30) {
    min *= 2;
    max *= 2;
  }
  if (min <= n && n < max) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}