#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  int cnt = 0;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    if (a < b) cnt++;
  }

  cout << cnt << endl;
  return 0;
}