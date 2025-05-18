#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

/**
 * WA
 * 
 * 計算量を抑える為の方法が思い付かなかった
 */
int main() {
  int n;
  cin >> n;
  vi p(n);
  rep(i, n) cin >> p[i];

  vi a(n, 0); // 条件2 (a_1 < a_2)
  vi b(n, 0); // 条件3 (a_i-1 < a_i > a_i+1)
  vi c(n, 0); // 条件4 (a_i-1 > a_i < a_i+1)

  rep(i, n - 1) {
    if(p[i] < p[i + 1]) a[i] = 1;
    if(i != 0) {
      if(p[i - 1] < p[i] && p[i] > p[i + 1]) b[i] = 1;
      if(p[i - 1] > p[i] && p[i] < p[i + 1]) c[i] = 1;
    }
  }

  int ans = 0;

  int temp = 0;
  bool flagB = false;
  bool flagC = false;

  rep(i, n - 1) {
    if (!flagB && !flagC && a[i] == 1) temp++;
    if (temp != 0) {
      if (b[i] == 1) {
        if (!flagB) flagB = true;
      }
      if (c[i] == 1) {
        if (!flagC) flagC = true;
      }
      // カウント
      if (flagB && flagC) {
        ans += temp;
      }
    }
  
    // 初期化
    if (flagC && flagB && b[i] == 1) {
      temp = 0;
      flagB = false;
      flagC = false;
      i--;
    }
    if (flagB && flagC && c[i] == 1) {
      temp = 0;
      flagB = false;
      flagC = false;
      i--;
    }
  }

  cout << ans << endl;
  return 0;
}