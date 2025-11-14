#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  vi a(5);
  for (int& i : a) cin >> i;
  vi ans = { 1, 2, 3, 4, 5 };
  rep(i, 4) {
    vi b = a;
    swap(b[i], b[i + 1]);
    if (b == ans) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}