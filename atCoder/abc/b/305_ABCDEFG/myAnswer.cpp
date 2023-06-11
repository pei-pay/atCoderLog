#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  char p, q;
  cin >> p >> q;

  int x[] = { 0, 3, 4, 8, 9, 14, 23 };
  char y[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G' };

  int indexP = -1, indexQ = -1;
  rep(i, 7) {
    if (p == y[i]) {
      indexP = i;
    }
    if (q == y[i]) {
      indexQ = i;
    }
  }

  if (indexP > indexQ) {
    cout << x[indexP] - x[indexQ] << endl;
  }
  else cout << x[indexQ] - x[indexP] << endl;

  return 0;
}