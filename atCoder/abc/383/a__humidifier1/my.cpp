#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  int x = 0;
  int y = 0;
  rep(i, n) {
    int t, v;
    cin >> t >> v;
    x = max(x - (t - y), 0);
    y = t;
    x += v;
  }
  cout << x << endl;
  return 0;
}