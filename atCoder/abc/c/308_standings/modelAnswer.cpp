#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int N;
vector<pair<int, int>> ab;
int main() {
  cin >> N;
  rep(i, N) {
    int a, b;
    cin >> a >> b;
    ab.emplace_back(a, a + b);
  }

  vector<int> p(N);
  iota(p.begin(), p.end(), 0);

  auto f = [&](int i, int j) {
    auto [ai, aj] = ab[i];
    auto [bi, bj] = ab[j];
    return (long long)ai * bj > (long long)aj * bi;
    };

  stable_sort(p.begin(), p.end(), f);

  rep(i, N) {
    cout << p[i] + 1 << " \n"[i == N - 1];
  }
  return 0;
}