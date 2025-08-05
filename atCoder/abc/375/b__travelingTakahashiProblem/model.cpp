#include <iostream>
#include <math.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  scanf("%d", &n);

  double ans = 0;
  int crrx = 0, crry = 0;
  rep(i, n) {
    int x, y;
    scanf("%d%d", &x, &y);
    ans += hypot(crrx - x, crry - y);
    crrx = x;
    crry = y;
  }
  ans += hypot(crrx, crry);

  printf("%.10f\n", ans);
  return 0;
}