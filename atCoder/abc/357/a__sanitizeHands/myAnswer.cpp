#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, m;
  cin >> n >> m;
  vi h(n);
  rep(i, n) cin >> h[i];


  rep(i, n) {
    m -= h[i];
    if (m < 0) {
      cout << i << endl;
      return 0;
    }
  }
  cout << n << endl;

  return 0;
}