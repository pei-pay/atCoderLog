#include <iostream>
#include <set>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  set<int> sx;
  sx.insert(a);
  sx.insert(b);
  sx.insert(c);
  sx.insert(d);

  if (sx.size() == 2) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}