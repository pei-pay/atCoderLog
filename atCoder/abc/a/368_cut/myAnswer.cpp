#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  int a[109];
  rep(i, n) cin >> a[i];

  vector<int> b;
  for (int i = n - k; i < n; i++) {
    b.push_back(a[i]);
  }
  rep(i, n - k) {
    b.push_back(a[i]);
  }

  rep(i, n) { 
    cout << b[i];
    if(i != n - 1) cout << " ";
  }
  cout << endl;

  return 0;
}