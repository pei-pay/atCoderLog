#include <iostream>
// #include <string>
// #include <algorithm>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int Answer = A;
  for (int i = 1; i < B; i++) {
    Answer = Answer * A;
  }
  cout << Answer << endl;

  return 0;
}