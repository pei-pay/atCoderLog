#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;

int main() {
  vi a;
  while (true) {
    int ca;
    cin >> ca;
    a.push_back(ca);
    if (ca == 0) break;
  }

  for (int i = a.size() - 1; i >= 0; --i) {
    cout << a[i] << "\n";
  }

  return 0;
}