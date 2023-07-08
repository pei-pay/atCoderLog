#include <iostream>
#include <string>
#include <map>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int N, M;
string C[109], D[109];
int P[109];
int main() {
  cin >> N >> M;
  rep1(i, N) cin >> C[i];
  rep1(i, M) cin >> D[i];
  rep(i, M + 1) cin >> P[i];

  map<string, int> Map;
  rep1(i, M) {
    Map[D[i]] = P[i];
  }

  int ans = 0;
  rep1(i, N) {
    if (Map[C[i]] == 0) {
      ans += P[0];
    }
    else {
      ans += Map[C[i]];
    }
  }

  cout << ans << endl;


  return 0;
}