#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  int x = 0;
  rep(i, n) {
    if (i % 2 == 0) x++;
  }
  if(x >= m) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}