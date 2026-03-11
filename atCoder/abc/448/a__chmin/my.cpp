#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, x;
  cin >> n >> x;
  rep(i, n) {
    int a;
    cin >> a;
    if(a < x) {
      x = a;
      cout << 1 << "\n";
    } else {
      cout << 0 << "\n";
    }
  }
  return 0;
}