#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  s[s.size() - 1] = '4';
  cout << s << endl;
  return 0;
}