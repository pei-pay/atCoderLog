#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n = 26;
  vi p(n);
  rep(i, n) {
    cin >> p[i];
  }

  rep(i, n) cout << char('a' + p[i] - 1);
  cout << endl;

  return 0;
}