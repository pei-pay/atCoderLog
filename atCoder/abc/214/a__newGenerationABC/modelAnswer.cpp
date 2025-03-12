#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  cout << (n <= 125 ? 4 : (n <= 211 ? 6 : 8)) << endl;
  return 0;
}