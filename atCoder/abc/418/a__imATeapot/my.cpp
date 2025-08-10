#include <iostream>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  if (n < 3) {
    cout << "No" << endl;
  }
  else if (s.substr(n - 3, 3) == "tea") {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}