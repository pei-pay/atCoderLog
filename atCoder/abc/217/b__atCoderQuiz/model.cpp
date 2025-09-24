#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(void) {
  string cand[4] = { "ABC", "AGC", "AHC", "ARC" };
  bool used[4] = {};
  string str;
  rep(i, 3) {
    cin >> str;
    rep(j, 4) {
      if (cand[j] == str) used[j] = true;
    }
  }
  rep(i, 4) {
    if (!used[i])cout << cand[i] << endl;
  }
  return 0;
}
