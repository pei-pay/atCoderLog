#include <iostream>
#include <vector>
#include <map>
using namespace std;
using vi = vector<int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)

vi compress(vi a) {
  int n = a.size();
  map<int, int> mp;
  rep(i, n) mp[a[i]] = 0;
  int id = 1;
  for (auto& p : mp) p.second = id++;
  rep(i, n) a[i] = mp[a[i]];
  return a;
}

int main() {
  int h, w, n;
  cin >> h >> w >> n;
  vi a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  a = compress(a);
  b = compress(b);
  rep(i, n) {
    printf("%d %d\n", a[i], b[i]);
  }

  return 0;
}