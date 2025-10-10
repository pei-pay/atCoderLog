#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  string t, a;
  cin >> n;
  cin >> t >> a;
  rep(i, n) {
    if (t[i] == 'o' && t[i] == a[i]) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}