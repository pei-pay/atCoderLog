// https://atcoder.jp/contests/abc246/tasks/abc246_a
#include <iostream>
using namespace std;

int main() {
  int x[3], y[3];
  for(int i = 0; i < 3; i++) {
    cin >> x[i] >> y[i];
  }
  int a, b;

  if(x[0] == x[1]) {
    a = x[2];
  } else if (x[0] == x[2]) {
    a = x[1];
  } else {
    a = x[0];
  }

  if(y[0] == y[1]) {
    b = y[2];
  } else if (y[0] == y[2]) {
    b = y[1];
  } else {
    b = y[0];
  }

  cout << a << " " << b << endl;

  return 0;
}