#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi d(n - 1);
  rep(i, n - 1) cin >> d[i];

  rep(i, n - 1) {
    int a = 0;
    for (int j = i; j < n - 1; ++j) {
      a += d[j];
      cout << a << " ";
    }
    cout << endl;
  }
  return 0;
}