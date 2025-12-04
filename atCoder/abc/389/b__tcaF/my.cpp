#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  long long x;
  cin >> x;

  long long sum = 1;
  rep(i, 1000) {
    sum *= (i + 1);
    if (sum == x) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}