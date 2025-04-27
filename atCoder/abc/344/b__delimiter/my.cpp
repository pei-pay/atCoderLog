#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

/*
 * WA
 */
int main() {
  vi a(110);

  // N が与えられないので何回入力を行えばいいかが分からない
  rep(i, 100) {
    int ai;
    cin >> ai;
    if (ai) a[i] = ai;
  }

  for(int i = a.size() - 1; i >= 0; --i) {
    if (a[i]) cout << a[i] << "\n";
  }

  return 0;
}