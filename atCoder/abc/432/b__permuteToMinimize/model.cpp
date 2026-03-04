#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string x;
  cin >> x;
  sort(x.begin(), x.end());
  rep(i, x.size()) {
    if (x[i] > '0') {
      swap(x[0], x[i]);
      break;
    }
  }
  cout << x << endl;
  return 0;
}