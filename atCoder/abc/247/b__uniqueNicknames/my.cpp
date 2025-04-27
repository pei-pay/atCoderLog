#include <iostream>
#include <string>
// #include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  string s[110], t[110];
  for (int i = 0; i < N; i++) cin >> s[i] >> t[i];
  string a[110];
  for (int i = 0; i < N; i++) a[i] = "";

  bool can = true;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      // ほかの人と全く被らない苗字を探索
      if (s[i] != s[j] && s[i] != t[j]) {
        if (s[i] != a[j]) {
          a[i] = s[i];
          cout << "苗字被りなし 未使用" << s[i] << endl;
          break;
        }
      }
      // ほかの人と全く被らない名前を探索
      if (t[i] != s[j] && t[i] != t[j]) {
        if (t[i] != a[j]) {
          a[i] = t[i];
          cout << "名前被りなし 未使用" << t[i] << endl;
          break;
        }
      }
      // } else if (s[i] != a[j]) {
      //   a[i] = s[i];
      //   cout << "苗字他と被っているけどまだ使われない" << s[i] << endl;
      //   break;
      // } else if (t[i] != a[j]) {
      //   a[i] = t[j];
      //   cout << "名前他と被っているけどまだ使われない" << t[i] << endl;
      //   break;
      // } else {
      //   cout << "全部使われていて不可" << s[i] << t[i] << endl;
      //   can = false;
      // }
    }
  }

  if (can) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}