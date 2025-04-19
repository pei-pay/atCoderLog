#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string s;
  cin >> s;
  sort(s.begin(), s.end());

  if (s == "122333") cout << "Yes\n";
  else cout << "No\n";
  return 0;
}