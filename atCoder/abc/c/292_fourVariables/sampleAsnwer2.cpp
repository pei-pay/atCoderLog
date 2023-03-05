#include <iostream>
#include <vector>
using namespace std;

/*
* O(NlogN)となる解法
*/
int main() {
  int N;
  cin >> N;
  vector<long long> f(N + 1);
  for (int a = 1; a <= N; a++) {
    for (int b = 1; a * b <= N; b++) {
      f[a * b]++;
    }
  }
  long long ans = 0;
  for (int x = 1; x < N; x++) {
    ans += f[x] * f[N - x];
  }

  cout << ans << endl;

  return 0;
}