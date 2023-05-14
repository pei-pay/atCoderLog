#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int n;
string s;
int main() {
  cin >> n;
  cin >> s;
  int t = 0, a = 0;
  rep(i, n) {
    if (s[i] == 'A') a++;
    else t++;
    if (a >= n / 2) {
      cout << "A" << '\n';
      return 0;
    }
    if (t >= n / 2) {
      cout << "T" << '\n';
      return 0;
    }
  }

  return 0;
}