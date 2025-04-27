#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;

  int t = 0, a = 0;
  rep(i, n) {
    if (s[i] == 'T') ++t;
    else ++a;
  }

  if (t > a) cout << 'T' << endl;
  else if (t < a) cout << 'A' << endl;
  else cout << char('T' + 'A' - s.back()) << endl;;

  return 0;
}