#include <iostream>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;

  if (s[n - 1] == 'o') {
    cout << "Yes" << "\n";
  }
  else {
    cout << "No" << "\n";
  }

  return 0;
}