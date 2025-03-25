#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  vi c(n);
  rep(i, n) cin >> s[i] >> c[i];

  sort(s.begin(), s.end());

  int t = 0;
  rep(i, n) t += c[i];

  int x = t % n;
  cout << s[x] << endl;
  return 0;
}