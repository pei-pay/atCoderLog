#include <iostream>
using namespace std;

const int mod = 1000000007;
int N, a[10000009];

int main() {
  cin >> N;

  a[1] = 1;
  a[2] = 1;
  for (int i = 3; i <= N; i++) {
    a[i] = (a[i - 1] + a[i - 2]) % mod;
  }

  cout << a[N] << endl;
  return 0;
}