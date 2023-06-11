#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int x = n + 5 - n % 5;
  int y = n - n % 5;

  if (min(abs(n - x), abs(n - y)) == abs(n - x)) {
    cout << x << endl;
  }
  else {
    cout << y << endl;
  }

  return 0;
}