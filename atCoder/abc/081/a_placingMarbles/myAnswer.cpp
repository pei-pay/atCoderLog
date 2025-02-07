#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int a = 0;
  for (char c : s) {
    if (c == '1') {
      a++;
    }
  }
  cout << a << '\n';
  return 0;
}