#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, m;
  cin >> n >> m;
  vi x(n, 0);
  rep(i, m) {
    int a;
    char b;
    cin >> a >> b;
    if (b == 'M' && x[a - 1] == 0) {
      x[a - 1] = 1;
      cout << "Yes" << '\n';
    }
    else {
      cout << "No" << '\n';
    }
  }

  return 0;
}