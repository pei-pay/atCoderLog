#include <iostream>
#include <cmath>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  double a;
  cin >> a;
  cout << (int)round(a + 0.0005) << endl;
  return 0;
}