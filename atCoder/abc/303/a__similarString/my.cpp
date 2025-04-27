#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  int N;
  string S, T;
  cin >> N;
  cin >> S >> T;

  bool same = true;
  rep(i, N) {
    if (S[i] == T[i]) {
      continue;
    }
    if (S[i] == 'l' && T[i] == '1') {
      continue;
    }
    if (S[i] == '1' && T[i] == 'l') {
      continue;
    }
    if (S[i] == '0' && T[i] == 'o') {
      continue;
    }
    if (S[i] == 'o' && T[i] == '0') {
      continue;
    }

    same = false;
  }

  if (same) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }

  return 0;
}