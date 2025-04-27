#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> d(n);
  rep(i, n) cin >> d[i];

  set<int> s;
  rep(i, n) s.insert(d[i]);

  cout << s.size() << endl;
  return 0;
}