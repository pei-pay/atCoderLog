#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  for (int i = s.size() - 1; i > 0; --i) {
    if (s[i - 1] == 'W' && s[i] == 'A') {
      s[i - 1] = 'A';
      s[i] = 'C';
    }
  }
  cout << s << endl;
  return 0;
}