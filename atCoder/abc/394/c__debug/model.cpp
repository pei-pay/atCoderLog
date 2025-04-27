#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();

  for (int i = 0; i < n - 1;) {
    if (s.substr(i, 2) == "WA") {
      s[i] = 'A';
      s[i + 1] = 'C';
      if (i) i--;
    } else i++;
  }
  cout << s << endl;
  return 0;
}