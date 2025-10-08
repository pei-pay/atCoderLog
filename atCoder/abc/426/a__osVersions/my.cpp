#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  string x, y;
  cin >> x >> y;
  vector<string> s = { "Ocelot", "Serval", "Lynx" };
  auto itx = find(s.begin(), s.end(), x);
  auto ity = find(s.begin(), s.end(), y);

  if (itx < ity) cout << "No" << endl;
  else cout << "Yes" << endl;
  return 0;
}