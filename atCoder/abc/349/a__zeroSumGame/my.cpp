#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  int sum = 0;
  rep(i, n - 1) {
    int a;
    cin >> a;
    sum += a;
  }
  cout << sum * -1 << endl;
  return 0;
}