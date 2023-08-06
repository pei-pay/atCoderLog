#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m), b(m);
  rep(i, m) {
    cin >> a[i] >> b[i];
  }

  int x[59];
  rep1(i, n) {
    x[i] = 0;
  }

  rep(i, m) {
    if (x[a[i]] == 0) {
      x[b[i]] = -1;
    }
    else {
      x[b[i]] = x[a[i]]--;
    }
  }

  int maxValue = x[1];
  int maxValueIndex = 1;
  for (int i = 2; i <= n; i++) {
    if (maxValue < x[i]) {
      maxValue = x[i];
      maxValueIndex = i;
    }
  }

  for (int i = 1; i <= n; i++) {
    if (i == maxValueIndex) continue;
    if (maxValue == x[i]) {
      cout << -1 << endl;
      return 0;
      break;
    }
  }

  cout << maxValueIndex << endl;

  return 0;
}