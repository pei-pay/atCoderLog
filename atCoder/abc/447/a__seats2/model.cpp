#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  cout << (2 * m - 1 <= n ? "Yes" : "No") << endl;
  return 0;
}