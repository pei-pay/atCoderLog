#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  rep(i, n) cin >> a[i + 1];

  vector<int> id(n + 1);
  int k = 1;
  int v = 1;
  while (id[v] == 0) {
    id[v] = k;
    k++;
    v = a[v];
  }
  vector<int> ans;
  int len = k - id[v];
  rep(i, len) {
    ans.push_back(v);
    v = a[v];
  }
  cout << ans.size() << endl;
  for (int v : ans) cout << v << ' ';
  cout << endl;

  return 0;
}