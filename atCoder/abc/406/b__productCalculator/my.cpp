#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vl = vector<ll>;

int main() {
  int n, k;
  cin >> n >> k;
  vl a(n);
  rep(i, n) cin >> a[i];

  ll x = 1;
  ll z = 1;

  rep(i, k) {
    z *= 10;
  }
  z -= 1;
  
  rep(i, n) {
    ll tx = x;
    ll ta = a[i];


    int cx = 0;
    int ca = 0;

    while(tx != 0) {
      tx /= 10;
      cx++;
    }

    while (ta != 0) {
      ta /= 10;
      ca++;
    }

    cx--;
    ca--;

    if(a[i] > z) {
      x = 1;
    } else if ((cx + ca) >= k) {
      x = 1;
    } else {
      x *= a[i];
      if(x > z) {
        x = 1;
      }
    }
  }

  cout << x << endl;

  return 0;
}