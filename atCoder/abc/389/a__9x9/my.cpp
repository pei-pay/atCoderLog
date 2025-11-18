#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int x = s[0] - '0';
  int y = s[2] - '0';
  cout << x * y << endl;
  return 0;
}