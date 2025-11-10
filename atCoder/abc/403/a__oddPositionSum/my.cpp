#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  int sum = 0;
  rep(i, n) {
    int a;
    cin >> a;
    if (i % 2 == 0) sum += a;
  }
  cout << sum << endl;
  return 0;
}