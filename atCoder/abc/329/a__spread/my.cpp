#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  rep(i, s.size()) {
    cout << s[i] << " ";
  }
  cout << endl;
  return 0;
}