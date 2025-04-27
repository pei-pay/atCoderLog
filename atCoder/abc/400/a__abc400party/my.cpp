#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;
  int b = 400 % a ? -1 : 400 / a;
  cout << b << endl;
  return 0;
}