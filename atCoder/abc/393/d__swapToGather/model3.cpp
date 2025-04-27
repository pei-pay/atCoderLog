#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  vector<long long> dl(n + 1);
  vector<long long> dr(n + 1);
  rep(ri, 2){
    long long now = 0;
    int one = 0;
    rep(i, n) {
      if (s[i] == '0') now += one;
      else one++;
      dl[i + 1] = now;
    }

    swap(dl, dr);
    reverse(dl.begin(), dl.end());
    reverse(dr.begin(), dr.end());
    reverse(s.begin(), s.end());
  }

  long long ans = 1e18;
  rep(i, n+1) ans = min(ans, dl[i] + dr[i]);
  cout << ans << endl;
  return 0;
}