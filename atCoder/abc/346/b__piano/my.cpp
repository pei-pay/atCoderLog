#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int w, b;
  cin >> w >> b;
  string a = "wbwbwwbwbwbw";

  string s;
  rep(i, 40) {
    s += a; 
  }

  rep(i, 400) {
    int cntW = 0, cntB = 0;
    for(int j = i; j < w + b; ++j) {
      if(s[j] == 'w') {
        cntW++;
      } else {
        cntB++;
      }
    }
    if(cntW == w && cntB == b) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}