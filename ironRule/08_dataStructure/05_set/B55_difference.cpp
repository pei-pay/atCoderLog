#include <iostream>
#include <set>
using namespace std;

long long Q, QueryTypes[100009], x[100009];
set<long long> S1, S2;

long long GetDown(long long r) {
  auto itr = S2.lower_bound(-r);
  if (itr == S2.end()) return -100000000000000LL;
  return -(*itr);
}
long long GetUp(long long r) {
  auto itr = S1.lower_bound(r);
  if (itr == S1.end()) return 100000000000000LL;
  return (*itr);
}


int main() {
  cin >> Q;
  for (long long i = 1; i <= Q; i++) cin >> QueryTypes[i] >> x[i];

  for (long long i = 1; i <= Q; i++) {
    if (QueryTypes[i] == 1) {
      S1.insert(x[i]);
      S2.insert(-x[i]);
    }
    if (QueryTypes[i] == 2) {
      long long v1 = GetDown(x[i]);
      long long v2 = GetUp(x[i]);
      long long ans = min(x[i] - v1, v2 - x[i]);
      if (S1.empty()) cout << "-1" << endl;
      else cout << ans << endl;
    }

    return 0;
  }