#include <iostream>
using namespace std;

int main() {
  int l, r;
  cin >> l >> r;
  string x = "atcoder";
  cout << x.substr(l - 1, r - l + 1) << endl;

  return 0;
}