#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  string S;
  cin >> S;

  bool a1 = false;
  bool a2 = false;
  int B1 = 0;
  int R1 = 0;
  int R2 = 0;
  int K = 0;
  rep(i, S.size()) {
    if (S[i] == 'B') {
      if (B1 == 0) {
        B1 = i + 1;
      }
      else {
        if (B1 % 2 != (i + 1) % 2) {
          a1 = true;
        }
      }
    }
    if (S[i] == 'R') {
      if (R1 == 0) {
        R1 = i + 1;
      }
      else {
        R2 = i + 1;
      }
    }
    if (S[i] == 'K') {
      K = i + 1;
    }
  }

  if (R1 < K && K < R2) a2 = true;

  if (a1 && a2) cout << "Yes" << endl;
  else cout << "No" << endl;
}