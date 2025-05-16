#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  int x = 4 * n - 1;
  
  vi b(n, 0);
  rep(i, x) {
    int a;
    cin >> a;
    b[a - 1]++;
  }

  rep(i, n) {
    if(b[i] != 4) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  return 0;
}