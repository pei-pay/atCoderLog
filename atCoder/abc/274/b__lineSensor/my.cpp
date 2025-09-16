#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> c(h);
  rep(i, h) cin >> c[i];

  rep(i, w) {
    int cnt = 0;
    rep(j, h) {
      if(c[j][i] == '#') cnt++;
    }
    cout << cnt << " ";
  }
  cout << endl;
  return 0;
}