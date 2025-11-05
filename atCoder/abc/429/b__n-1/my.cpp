#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, m;
  cin >> n >> m;
  vi a(n);
  rep(i, n) cin >> a[i];
  int sum = 0;
  rep(i, n) sum += a[i];
  int x = sum - m;
  rep(i, n) {
    if (x == a[i]) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}