#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

/*
 * TLE
 */
int main() {
  int q;
  cin >> q;
  map<int, int> m;
  rep(i, q) {
    int n;
    cin >> n;
    int x;
    if (n == 1 || n == 2) cin >> x;

    if (n == 1) {
      m[x] += 1;
    } else if (n == 2) {
      m[x] -= 1;
    } else if (n == 3) {
      int c = 0;
      for(const auto& pair: m) {
        if(pair.second > 0) {
          c++;
        }
      }
      cout << c << endl;
    }
  }

  return 0;
}