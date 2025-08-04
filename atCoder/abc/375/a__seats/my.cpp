#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;

  int cnt = 0;
  rep(i, n-2) {
    if(s[i] == '#' && s[i + 2] == '#' && s[i + 1] == '.') {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}