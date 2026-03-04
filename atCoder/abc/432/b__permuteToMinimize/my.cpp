#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int x;
  cin >> x;
  vi a;
  while (x > 0) {
    a.push_back(x % 10);
    x /= 10;
  }

  sort(a.begin(), a.end());
  
  if (a[0] == 0) {
    int mi = 100;
    int index = 0;
    rep(i, a.size()) {
      if (a[i] == 0) continue;
      if(mi > a[i]) {
        mi = a[i];
        index = i;
      }
    }
    a[0] = mi;
    a[index] = 0;
  }

  rep(i, a.size()) {
    cout << a[i];
  }
  cout << endl;

  return 0;
}