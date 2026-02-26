#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  if (s.compare(s.size() - 3, 3, "san") == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}