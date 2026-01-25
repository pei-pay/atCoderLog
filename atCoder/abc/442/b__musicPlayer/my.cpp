#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int q;
  cin >> q;
  int v = 0;
  bool play = false;
  rep(i, q) {
    int a;
    cin >> a;
    if (a == 1) v++;
    else if (a == 2) {
      if (v >= 1) v--;
    }
    else if (a == 3) {
      play = !play;
    }
    if (v >= 3 && play) cout << "Yes" << "\n";
    else cout << "No" << "\n";
  }
  return 0;
}