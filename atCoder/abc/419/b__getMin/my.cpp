#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int q;
  cin >> q;
  vector<int> z;
  rep(i, q) {
    int a, x;
    cin >> a;
    if(a == 1) {
      cin >> x;
      z.push_back(x);
    } else {
      sort(z.begin(), z.end());
      cout << z[0] << endl;
      z[0] = 1000;
    }
  }
  return 0;
}