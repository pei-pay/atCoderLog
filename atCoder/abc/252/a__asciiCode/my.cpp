#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x = n - 97;

  cout << char('a' + x) << endl;
  return 0;
}