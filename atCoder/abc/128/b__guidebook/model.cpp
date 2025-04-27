#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;
#define rep(i, n)  for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<tuple<string, int, int>> a;
  rep(i, n) {
    string s;
    int p;
    cin >> s >> p;
    p = -p; // 昇順で比較した時に降順になるようにマイナスを使用
    a.push_back(tie(s, p, i));
  }

  sort(a.begin(), a.end());

  rep(i, n) {
    cout << get<2>(a[i]) + 1 << endl;
  }
  return 0;
}