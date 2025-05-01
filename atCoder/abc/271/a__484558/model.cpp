#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a, b;
  a = n / 16; 
  b = n % 16;

  if (a <= 9) cout << a;
  else cout << char('A' + a - 10);

  if (b <= 9) cout << b;
  else cout << char('A' + b - 10);
  
  cout << endl;

  return 0;
}