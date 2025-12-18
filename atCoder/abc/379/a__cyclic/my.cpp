#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a = n / 100;
  int b = (n % 100) / 10;
  int c = (n % 100) % 10;

  cout << b << c << a << " ";
  cout << c << a << b << endl;
  return 0;
}