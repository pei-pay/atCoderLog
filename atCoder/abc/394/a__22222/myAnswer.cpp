#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  rep(i, s.size()) {
    if (s[i] == '2') {
      cout << '2';
    }
  }
  cout << endl;

  return 0;
}