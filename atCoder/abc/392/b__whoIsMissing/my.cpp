#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  rep(i, m) cin >> a[i];

  vector<int> x;
  rep(i, n) {
    bool flag = false;
    rep(j, m) {
      if (i + 1 == a[j]) {
        flag = true;
        break;
      }
    }
    if (flag == false) {
      x.push_back(i + 1);
    }
  }

  cout << x.size() << endl;
  if (x.size() == 0) {
    cout << " " << endl;
  }
  else {
    rep(i, x.size()) {
      cout << x[i] << " ";
    }
    cout << endl;
  }


  return 0;
}