#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int cnt = 0;
  rep(i, s.size()) {
    if(i == 0) continue;
    else if(s[i] == '-') cnt++;
    else if (s[i] =='|') {
      cout << cnt << " ";
      cnt = 0;
    }
  }
  cout << endl;
  return 0;
}