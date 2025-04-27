#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * aとbをstringにして結合
 * その文字列をソートして、先頭と末尾が同じ文字かどうかをチェック
 * -> 日付がゾロ目かどうかをチェック
*/
bool check(int a, int b) {
  string s = to_string(a) + to_string(b);
  sort(s.begin(), s.end());
  return s[0] == s.back();
}

int main() {
  int n;
  cin >> n;
  vector<int> d(n + 1);
  for (int i = 1; i <= n; i++) cin >> d[i];

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= d[i]; j++) {
      if (check(i, j)) ans++;
    }
  }

  cout << ans << endl;

  return 0;
}