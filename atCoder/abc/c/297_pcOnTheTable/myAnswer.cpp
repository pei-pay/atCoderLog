#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  int H, W;
  string S[110];
  cin >> H >> W;

  rep1(i, H) cin >> S[i];

  rep1(i, H) {
    rep(j, W) {
      if (S[i][j] == 'T' && S[i][j + 1] == 'T') {
        S[i][j] = 'P';
        S[i][j + 1] = 'C';
      }
    }
  }

  rep1(i, H) cout << S[i] << endl;
  return 0;
}