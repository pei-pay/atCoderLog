#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n = 4;
  vi x(n, 0);
  rep(i, n) {
    int a;
    cin >> a;
    a--;
    x[a]++;
  }

  int cnt = 0;
  rep(i, n) {
    if (x[i] == 4) cnt += 2;
    else if (x[i] >= 2) cnt++;
  }
  cout << cnt << endl;
  return 0;
}