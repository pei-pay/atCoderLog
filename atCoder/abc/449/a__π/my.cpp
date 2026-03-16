#include <iostream>
using namespace std;

int main() {
  int d;
  cin >> d;
  double x = double(d) / 2;
  double ans = x * x * 3.141592653589793;
  printf("%.10f\n", ans);
  return 0;
}