#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int N;
string S[109];
int main() {
  cin >> N;
  rep(i, N) cin >> S[i];

  rep(i, N) {
    rep(j, N) {
      if (i == j) continue;
      string x = S[i] + S[j];

      bool same = true;
      rep(k, x.size()) {
        if (x[k] != x[x.size() - 1 - k]) {
          same = false;
        }
      }

      if (same) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}