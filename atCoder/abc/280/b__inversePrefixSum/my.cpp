#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> s(n);
  rep(i, n) cin >> s[i];
  vector<int> a(n);
  a[0] = s[0];
  long long sum = a[0];
  for (int i = 1; i < n; i++) {
    a[i] = s[i] - sum;
    sum += a[i];
  }
  rep(i, n) cout << a[i] << " ";
  cout << endl;
  return 0;
}