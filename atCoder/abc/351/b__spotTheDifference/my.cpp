#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;

  vector<vector<char>> a(n, vector<char>(n));
  vector<vector<char>> b(n, vector<char>(n));

  rep(i, n) rep(j, n) {
    cin >> a[i][j];
  }
  rep(i, n) rep(j, n) {
    cin >> b[i][j];
  }

  rep(i, n) rep(j, n) {
    if(a[i][j] != b[i][j]) {
      cout << i + 1 << " " << j + 1 << endl;
      break;
    }
  }

  return 0;
}