#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int a, b;
int main() {
  cin >> a >> b;

  int ansa = 1;
  rep(i, b) {
    ansa = ansa * a;
  }
  int ansb = 1;
  rep(i, a) {
    ansb = ansb * b;
  }

  cout << ansa + ansb << endl;
  return 0;
}