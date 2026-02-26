#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  string x= s.substr(s.size() - 3, 3);
  if (x == "san") {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}