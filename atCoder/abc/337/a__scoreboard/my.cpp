#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  int sumx = 0, sumy = 0;
  rep(i, n) {
    sumx += x[i];
    sumy += y[i];
  }

  if (sumx == sumy) cout << "Draw" << endl;
  else if (sumx < sumy) cout << "Aoki" << endl;
  else cout << "Takahashi" << endl;
  return 0;
}