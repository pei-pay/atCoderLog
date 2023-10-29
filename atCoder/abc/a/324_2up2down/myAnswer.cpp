#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int x, y;
  cin >> x >> y;

  if (y - x >= 0 && y - x <= 2) cout << "Yes" << endl;
  else if (y - x >= -3 && y - x <= 0) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}