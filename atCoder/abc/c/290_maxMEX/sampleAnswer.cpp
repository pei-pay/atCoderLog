#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  int x = 0;
  set<int> s;
  for (int i = 0; i < n; i++) s.insert(a[i]);
  while (s.count(x)) x++;
  int ans = min(x, k);
  cout << ans << endl;
  return 0;
}