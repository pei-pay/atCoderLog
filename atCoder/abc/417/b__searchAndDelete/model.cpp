#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, m;
  cin >> n >> m;
  vi a(n);
  rep(i, n) cin >> a[i];
  rep(i, m) {
    int b;
    cin >> b;
    auto it = find(a.begin(), a.end(), b);
    if(it == a.end()) continue;
    a.erase(it);
  }

  rep(i, a.size()) cout << a[i] << " ";
  cout << endl;
  return 0;
}