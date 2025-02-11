#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  int n;
  cin >> n;
  rep(i, 9) rep(j, 9) {
    if (i * j == n) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}