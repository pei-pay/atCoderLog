#include <iostream>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int a, b;
  cin >> a >> b;
  set<int> s;
  rep(i, 3) {
    s.insert(i + 1);
  }
  if (s.count(a)) s.erase(a);
  if (s.count(b)) s.erase(b);

  if (s.size() == 1) cout << *s.begin() << endl;
  else cout << -1 << endl;
  return 0;
}