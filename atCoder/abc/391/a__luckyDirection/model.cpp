#include <iostream>
using namespace std;

int main() {
  string d;
  cin >> d;
  for (char c: d) {
    if (c == 'N') cout << 'S';
    if (c == 'S') cout << 'N';
    if (c == 'E') cout << 'W';
    if (c == 'W') cout << 'E';
  }
  cout << endl;

  return 0;
}