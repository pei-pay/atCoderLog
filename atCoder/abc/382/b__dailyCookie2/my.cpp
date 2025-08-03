#include <iostream>
using namespace std;

int main() {
  int n, d;
  string s;
  cin >> n >> d;
  cin >> s;

  int i = n - 1;
  while (d > 0) {
    if(s[i] == '@') {
      s[i] = '.';
      d--;
    }
    i--;
  }

  cout << s << endl;
  return 0;
}