#include <iostream>
using namespace std;

int main() {
  char a, b, c;
  cin >> a >> b >> c;

  if (a != b) {
    cout << "A" << '\n';
  } else if (a == c) {
    cout << "B" << '\n';
  } else{
    cout << "C" << '\n';
  }
  return 0;
}