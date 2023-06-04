#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

/*
 * TLEで✖︎
*/
int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;

  int ans = -1;
  rep(i, n) {
    if (s[i] == 'o') {
      int j = i;
      int cnt = 1;
      while (true) {
        j++;
        if (j >= n) {
          cnt = -1;
          break;
        };
        if (s[j] == '-') {
          // i = j - 1;
          break;
        };
        cnt++;
      }
      if (ans < cnt) {
        ans = cnt;
      }
    }
    if (s[i] == '-') {
      int j = i;
      int cnt = 0;
      while (true) {
        j++;
        if (j >= n) {
          if (cnt == 0) {
            cnt = -1;
          }
          break;
        };
        if (s[j] == '-') {
          cnt = -1;
          // i = j - 1;
          break;
        };
        cnt++;
      }
      if (ans < cnt) {
        ans = cnt;
      }
    }
  }

  cout << ans << endl;



  return 0;
}