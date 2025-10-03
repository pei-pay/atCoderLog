#include <iostream>
using namespace std;

int main() {
  string p;
  int l;
  cin >> p;
  cin >> l;

  if (p.length() >= l) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}