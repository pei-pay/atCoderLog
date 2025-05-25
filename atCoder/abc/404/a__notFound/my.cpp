#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  string all = "abcdefghijklmnopqrstuvwxyz";

  for (char a: all) {
    bool found = false;
    for (char c: s) {
      if (a == c) found = true;
    }

    if (!found) {
      cout << a << endl;
      return 0;
    }
  }

  return 0;
}