#include <iostream>
using namespace std;


int r(int x) {
  if (x == 0) return 1;
  else {
    return x * r(x - 1);
  }
}

int main() {
  int n;
  cin >> n;
  cout << r(n) << endl;
  return 0;
}