#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  bool ok = true;
  for (auto& c : s) {
    if (c == '|') ok = !ok;
    else if (ok) cout << c;
  }
  cout << endl;

  return 0;
}