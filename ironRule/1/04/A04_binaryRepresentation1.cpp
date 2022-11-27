#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  for (int i = 9; i >= 0; i--) {
    int divider = 1 << i;
    cout << (N / divider) % 2;
  }

  cout << endl;

  return 0;
}