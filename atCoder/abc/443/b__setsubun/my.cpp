#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int x = n;
  int y = 0;
  while (x < k) {
    y++;
    n++;
    x += n;
  }

  cout << y << endl;
  return 0;
}