#include <iostream>
using namespace std;

int main() {
  int n, t, k;
  cin >> n >> t >> k;

  int x = (n / 2) + 1;
  if (x <= t || x <= k) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}