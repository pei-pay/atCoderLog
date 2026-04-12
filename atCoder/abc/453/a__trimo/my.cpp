#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  bool flag = true;
  rep(i, n) {
    if (flag && s[i] == 'o') continue;
    else {
      flag = false;
      cout << s[i];
    }
  }
  cout << endl;
  return 0;
}