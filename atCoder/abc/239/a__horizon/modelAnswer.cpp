#include <iostream>
#include <cmath>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  double h;
  cin >> h;
  double ans = sqrt(h * (12800000  + h));
  printf("%.10f\n", ans);

  return 0;
}