#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  s.erase(s.begin() + n / 2);
  cout << s << '\n';
}
