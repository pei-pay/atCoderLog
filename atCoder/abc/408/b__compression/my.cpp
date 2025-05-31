#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());

  set<int> s;

  rep(i, n) {
    s.insert(a[i]);
  }

  cout << s.size() << endl;

  rep(i, n) {
    if(i - 1 >= 0 && a[i - 1] == a[i]) continue;
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}