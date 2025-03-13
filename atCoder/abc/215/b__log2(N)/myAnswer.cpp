#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;
int main() {
  ll n;
  cin >> n;
  int x = 0;
  ll a = 1;
  rep(i, 60) {
    if (a * 2 <= n) {
      x++;
      a = a * 2;
    }
    else {
      cout << x << endl;
      return 0;
    }
  }
  return 0;
}