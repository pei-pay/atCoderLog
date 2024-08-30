#include <bits/stdc++.h>
using namespace std;
int main() {
  long long a, b, k;
  cin >> a >> b >> k;
  int res = 0;
  while (a < b) {
    a *= k;
    res++;
  }
  cout << res << endl;
}