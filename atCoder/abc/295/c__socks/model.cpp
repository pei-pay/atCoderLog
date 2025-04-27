#include <iostream>
#include <map>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  map<int, int> m;
  rep(i, n) {
    int a;
    cin >> a;
    m[a]++;
  }
  int ans = 0;
  for (auto [col, num] : m) {
    ans += num / 2;
  }
  cout << ans << endl;

  return 0;
}