#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;

  ll x = 1;
  ll y = 1;
  rep(i, m) {
    y *= n;
    x += y;
    if(x > 1000000000) {
      cout << "inf" << endl;
      return 0;
    }
  }

  cout << x << endl;
  return 0;
}