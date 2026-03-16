#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
  int d;
  cin >> d;
  cout << fixed << setprecision(20) << M_PI * d * d / 4 << endl;
  return 0;
}