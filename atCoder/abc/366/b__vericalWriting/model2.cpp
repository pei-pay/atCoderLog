#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<string> S(n);
  for(auto& s: S) cin >> s;
  int m = 0;
  for(auto& s: S) m = max(m, (int)s.size());
  vector<string> T(m, string(n, '*'));
  rep(i,n) {
    for(int j = 0; j < (int)S[i].size(); ++j) {
      T[j][n - i - 1] = S[i][j];
    }
  }
  rep(i,m) {
    while(T[i].back() == '*') {
      T[i].pop_back();
    }
    cout << T[i] << endl;
  }
  return 0;
}