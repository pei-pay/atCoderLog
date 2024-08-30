#include <iostream>
#include <utility>
using namespace std;

int main(void) {
  int n, a[100];
  string s[100];

  cin >> n;
  // 0から番号づける
  for (int i = 0; i < n; i++) cin >> s[i] >> a[i];

  // 最小値とそのindexを管理
  pair<int, int> m = { a[0], 0 };
  for (int i = 1; i < n; i++) m = min(m, { a[i], i });
  int p = m.second;

  // 人pから時計回りでi番目の人（人p自身を0番目として起算）の番号は(p + i)modN と表すことができる
  for (int i = 0; i < n; i++) cout << s[(p + i) % n] << endl;

  return 0;
}
