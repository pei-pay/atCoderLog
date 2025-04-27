#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(long long i = 0; i < (n); ++i)


/*
 * WA
*/
long long N;
long long A[200009], B[200009];
int main() {
  cin >> N;
  rep(i, N) {
    cin >> A[i] >> B[i];
  }

  vector<pair<long long, long double>> pairs(N);
  rep(i, N) {
    long double rate = static_cast<long double>(A[i]) / (A[i] + B[i]);
    pair<long long, long double> x(i, rate);
    pairs[i] = x;
  }

  sort(pairs.begin(), pairs.end(),
    [](const pair<long long, long double>& a, const pair<long long, long double>& b) {
      return a.second > b.second;
    });

  rep(i, N) {
    cout << pairs[i].first + 1 << " ";
  }
  cout << endl;

  return 0;
}