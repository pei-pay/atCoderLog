#include <iostream>
// #include <string>
// #include <algorithm>
using namespace std;

int main() {
  int A, B, C, D, E, F, X;
  cin >> A >> B >> C >> D >> E >> F >> X;

  int tTime = X;
  int tDistance = 0;
  while (tTime > 0) {
    if (tTime - A >= 0) {
      tTime -= A;
      tDistance += A * B;
    } else {
      tDistance += tTime * B;
      break;
    }
    tTime -= C;
  }

  int aTime = X;
  int aDistance = 0;
  while (aTime > 0) {
    if (aTime - D >= 0) {
      aTime -= D;
      aDistance += D * E;
    } else {
      aDistance += aTime * E;
      break;
    }
    aTime -= F;
  }

  if (tDistance > aDistance) {
    cout << "Takahashi" << endl;
  } else if (tDistance < aDistance) {
    cout << "Aoki" << endl;
  } else {
    cout << "Draw" << endl;
  }
}