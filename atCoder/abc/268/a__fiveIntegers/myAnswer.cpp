#include <iostream>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  set<int> a;
  rep(i, 5) {
    int x;
    cin >> x;
    a.insert(x);
  }
  cout << a.size() << endl;
  return 0;
}