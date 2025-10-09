#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  if (s[0] != s[1]) cout << s[0] << "\n";
  else cout << s.back() << "\n";
  return 0;
}