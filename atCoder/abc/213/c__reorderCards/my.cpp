#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

/**
 * RE
 * 
 * 10^9 回分のループを回してしまっている
 */
int main() {
  int h, w, n;
  cin >> h >> w >> n;
  vector<int> a(n), b(n);
  rep(i, n) {
    int a_, b_;
    cin >> a_ >> b_;
    a_--; b_--;
    a[i] = a_;
    b[i] = b_;
  }

  vector<int> y(h,-1), x(w, -1);
  rep(i, n) {
    y[a[i]] = i;
    x[b[i]] = i;
  }

  int cntY = 0, cntX = 0;
  vector<int> ansY(n);
  vector<int> ansX(n);
  rep(i, h) {
    if (y[i] == -1) cntY++;
    else {
      ansY[y[i]] = i - cntY;
    }
  }
  rep(i, w) {
    if (x[i] == -1) cntX++;
    else {
      ansX[x[i]] = i - cntX;
    }
  }

  rep(i, n) {
    cout << ansY[i] + 1 << " " << ansX[i] + 1 << endl;
  }

  return 0;
}