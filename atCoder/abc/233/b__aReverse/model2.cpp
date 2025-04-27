#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int l, r;
  cin >> l >> r;
  string s;
  cin >> s;
  --l;
  reverse(s.begin() + l, s.begin() + r);
  cout << s << endl;
  return 0;
}