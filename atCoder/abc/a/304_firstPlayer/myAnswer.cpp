#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  int n;
  string s[109];
  int a[109];

  cin >> n;
  rep1(i, n) {
    cin >> s[i] >> a[i];
  }

  long long min = 1'000'000'000'000'000LL;
  int minIndex = 0;
  rep1(i, n) {
    if (min > a[i]) {
      min = a[i];
      minIndex = i;
    }
  }

  for (int i = minIndex; i <= n; i++) {
    cout << s[i] << endl;
  }

  for (int i = 1; i < minIndex; i++) {
    cout << s[i] << endl;
  }

  return 0;
}