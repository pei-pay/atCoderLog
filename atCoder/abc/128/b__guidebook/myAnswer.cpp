#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  vector<int> p(n);
  rep(i, n) {
    cin >> s[i];
    cin >> p[i];
  }

  // index, 市名, 点数をまとめて管理
  vector<pair<int, pair<string, int>>> x(n);
  rep(i, n) {
    x[i] = { i, { s[i], p[i] } };
  }
  sort(x.begin(), x.end(), [](const pair<int, pair<string, int>>& a, const pair<int, pair<string, int>>& b) {
    if (a.second.first == b.second.first) {
      // 同じ文字列の場合は点数で降順にソート
      return a.second.second > b.second.second;
    }
    else {
      // 辞書順にソート
      return a.second.first < b.second.first;
    }
    });

  rep(i, n) {
    cout << x[i].first + 1 << endl;
  }
  return 0;
}


