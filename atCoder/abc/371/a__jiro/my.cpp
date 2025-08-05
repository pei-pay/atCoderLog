#include <iostream>
using namespace std;

int main() {
  char ab, ac, bc;
  cin >> ab >> ac >> bc;
  if (ab == '<') {
    if (ac == '<') {
      if (bc == '<') {
        cout << "B" << '\n';
      } else {
        cout << "C" << '\n';
      }
    } else {
      cout << "A" << '\n';
    }
  } else {
    if (ac == '<') {
      cout << "A" << '\n';
    } else {
      if (bc == '<') {
        cout << "C" << '\n';
      } else {
        cout << "B" << '\n';
      }
    }

  }
  return 0;
}