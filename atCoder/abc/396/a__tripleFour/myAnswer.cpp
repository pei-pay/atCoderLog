#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int x = 0;
  int cnt = 0;
  rep(i, n) {
    if (x == a[i]) {
      cnt++;
    }
    else {
      cnt = 0;
      x = a[i];
      cnt++;
    }
    if (cnt == 3) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;

  return 0;
}