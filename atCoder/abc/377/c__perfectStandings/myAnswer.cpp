#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;
using P = pair<int, string>;

int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  string abcde = "ABCDE";
  vector<P> s;
  rep(i, 1 << 5) {
    int sum = 0;
    string temps;
    rep(j, 5) {
      if (i >> j & 1) {
        if (abcde[j] == 'A') sum += a;
        else if (abcde[j] == 'B') sum += b;
        else if (abcde[j] == 'C') sum += c;
        else if (abcde[j] == 'D') sum += d;
        else if (abcde[j] == 'E') sum += e;
        temps.push_back(abcde[j]);
      }
    }
    if (temps.size() == 0) continue;
    s.push_back({ sum, temps });
  }

  sort(s.begin(), s.end(), [](const P& x, const P& y) {
    if (x.first == y.first) {
      return x.second < y.second;
    }
    else {
      return x.first > y.first;
    }
    });

  rep(i, s.size()) {
    cout << s[i].second << endl;
  }

  return 0;
}