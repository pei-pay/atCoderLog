#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  vector<P> c;
  rep(i, n) c.emplace_back(a[i], i);
  rep(i, m) c.emplace_back(b[i], n + i);

  sort(c.begin(), c.end());

  vector<int> ai(n), bi(m);

  rep(i, n + m) {
    int j = c[i].second;
    if (j < n) ai[j] = i + 1;
    else bi[j - n] = i + 1;
  }

  rep(i, n) cout << ai[i] << " ";
  cout << endl;
  rep(i, m) cout << bi[i] << " ";
  cout << endl;


  return 0;
}