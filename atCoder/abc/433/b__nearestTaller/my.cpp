#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];
  rep(i, n) {
    int found = -1;
    for (int j = i; j >= 0; --j) {
      if (a[i] < a[j]) {
        found = j + 1;
        break;
      }
    }
    cout << found << endl;
  }
  return 0;
}