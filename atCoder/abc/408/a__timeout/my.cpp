#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, s;
  cin >> n >> s;
  vi t(n);
  rep(i, n) cin >> t[i];

  bool ans = true;

  int x = 0;
  rep(i, n) {
    int y = t[i] - x;
    if (y > s) {
      cout << "No" << endl;
      return 0;
    }
    x = t[i];
  }
  cout << "Yes" << endl;
  return 0;
}