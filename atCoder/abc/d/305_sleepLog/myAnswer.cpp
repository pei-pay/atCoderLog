#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

long long n, q;
long long a[200009];
vector<pair<long long, long long>> rate;
vector<long long> amount;


/*
 * WA, TLE
*/
int main() {
  cin >> n;
  rep(i, n) cin >> a[i];
  rep(i, n - 1) {
    rate.push_back(pair<long long, long long>(a[i], a[i + 1]));
  }
  amount.push_back(0);
  rep(i, rate.size()) {
    if (i == 0) continue;
    if (i % 2 == 0) {
      amount.push_back(0);
    }
    else {
      amount.push_back(amount[i - 1] + rate[i].second - rate[i].first);
    }
  }


  cin >> q;
  rep(i, q) {
    long long l, r;
    cin >> l >> r;
    long long Lrate = -1;
    long long Rrate = -1;

    rep(i, rate.size()) {
      if (rate[i].first <= l && l < rate[i].second) {
        Lrate = i;
      }
      if (rate[i].first < r && r <= rate[i].second) {
        Rrate = i;
      }
    }

    long long x = Lrate % 2 == 0 ? 0 : rate[Lrate].second - l;
    long long y = Rrate % 2 == 0 ? 0 : r - rate[Rrate].first;
    long long z = 0;


    for (long long i = Lrate + 1; i < Rrate; i++) {
      z += amount[i];
    }

    cout << x + y + z << endl;

  }

  return 0;
}