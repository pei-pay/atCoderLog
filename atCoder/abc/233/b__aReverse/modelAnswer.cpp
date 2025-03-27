#include <iostream>
using namespace std;

int main() {
  int l, r;
  cin >> l >> r;
  string s;
  cin >> s;
  l--;
  r--;
  while (l < r) {
    swap(s[l], s[r]);
    l++;
    r--;
  }
  cout << s << endl;
  return 0;
}