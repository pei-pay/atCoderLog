#include <iostream>
using namespace std;


int main(void) {
  int s, a, b, x;
  cin >> s >> a >> b >> x;

  int len = 0;
  int mode = 0, cnt = 0; // mode 0: run, mode 1: stop
  for (int i = 0; i < x; i++) {
    if (mode == 0) len++;

    cnt++;
    if (mode == 0 && cnt == a) {
      mode = 1;
      cnt = 0;
    }
    else if (mode == 1 && cnt == b) {
      mode = 0;
      cnt = 0;
    }
  }

  int ans = len * s;
  cout << ans << "\n";

  return 0;
}
