#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> a(n);
  rep(i, n) {
    int x;
    cin >> x;
    a[i] = make_pair(x, i);
  };
  sort(a.begin(), a.end());
  cout << a[n - 2].second + 1 << endl;
  return 0;
}