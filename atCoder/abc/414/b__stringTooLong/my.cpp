#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<pair<char, ll>> x(n);
  rep(i, n) {
    char c;
    ll a;
    cin >> c >> a;
    x[i] = {c, a};
  }
  string s = "";

  rep(i, n) {
    if(x[i].second <= 100 - s.size()) {
      s += string(x[i].second, x[i].first);
    } else {
      s = "Too Long";
      break;
    }
  }

  cout << s << endl;

  return 0;
}