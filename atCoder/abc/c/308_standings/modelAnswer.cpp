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

  // [0, 1, 2, ... N] の配列を作成
  vector<int> p(N);
  iota(p.begin(), p.end(), 0);

  // ソートの比較関数 (abの要素を比較してpを並び替える)
  auto f = [&](int i, int j) {
    auto [ai, aj] = ab[i];
    auto [bi, bj] = ab[j];
    return (long long)ai * bj > (long long)aj * bi;
    };

  // NOTE: 比較関数が同率の場合ソートの前後で順序が入れ替わってしまわないように安定ソートを使う  https://ja.wikipedia.org/wiki/%E5%AE%89%E5%AE%9A%E3%82%BD%E3%83%BC%E3%83%88
  stable_sort(p.begin(), p.end(), f);

  rep(i, N) {
    cout << p[i] + 1 << " \n"[i == N - 1];
  }
  return 0;
}