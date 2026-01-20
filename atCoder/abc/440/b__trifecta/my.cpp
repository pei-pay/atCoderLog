#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> t(n);
  rep(i, n) {
    cin >> t[i].first;
    t[i].second = i + 1;
  }
  sort(t.begin(), t.end());
  cout << t[0].second << " " << t[1].second << " " << t[2].second << endl;
  return 0;
}