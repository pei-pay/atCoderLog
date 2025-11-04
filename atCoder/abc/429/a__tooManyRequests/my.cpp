#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  rep(i, n) {
    if (i + 1 <= m) {
      cout << "OK" << "\n";
    }
    else {
      cout << "Too Many Requests" << "\n";
    }
  }
  return 0;
}