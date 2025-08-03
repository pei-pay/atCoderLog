#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, d;
  string s;
  cin >> n >> d;
  cin >> s;
  int cnt = 0;
  rep(i, n) {
    if(s[i] == '@') cnt++;
  }
  cout << n - (cnt - d) << endl;
  return 0;
}