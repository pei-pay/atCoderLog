#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  string s;
  cin >> n >> m;
  cin >> s;

  int bought = 0;
  int logoT = 0;
  int plainT = m;
  rep(i, n) {
    if (s[i] == '0') {
      plainT = m;
      logoT = bought;
    }
    else if (s[i] == '1') {
      if (plainT > 0) {
        plainT--;
      }
      else {
        if (logoT > 0) {
          logoT--;
        }
        else {
          bought++;
        }
      }
    }
    else if (s[i] == '2') {
      if (logoT > 0) {
        logoT--;
      }
      else {
        bought++;
      }
    }
    else {
      // do nothing
    }
  }

  cout << bought << endl;

  return 0;
}