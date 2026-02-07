#include <iostream>
using namespace std;

int main() {
  int r, g, b;
  cin >> r >> g >> b;
  string c;
  cin >> c;
  if (c == "Red") {
    if (g < b) {
      cout << g << endl;
    }
    else {
      cout << b << endl;
    }
  }
  else if (c == "Green") {
    if (r < b) {
      cout << r << endl;
    }
    else {
      cout << b << endl;
    }
  }
  else if (c == "Blue") {
    if (r < g) {
      cout << r << endl;
    }
    else {
      cout << g << endl;
    }
  }
  return 0;
}