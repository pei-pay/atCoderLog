#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  unsigned N;
  cin >> N;
  vector<unsigned> A(N), fA(N);
  for (auto&& a : A) cin >> a;

  // fA[i] := A[i] 分までに何分寝たか
  for (unsigned i = 1; i < N; i++) {
    if (i % 2 == 0) fA[i] = fA[i - 1] + A[i] - A[i - 1];
    else fA[i] = fA[i - 1];
  }

  unsigned Q;
  cin >> Q;

  // f(x) := x 分までに何分寝たか
  auto f{ [&A, &fA](auto x) -> unsigned {
    // 二分探索: Aj <= x <= Aj+1であるようなjを求める
    const auto j = upper_bound(begin(A) + 1, end(A), x) - begin(A) - 1;

    cout << endl;
    cout << "j: " << j << endl;
    cout << "fA[j]: " << fA[j] << endl;
    cout << "(fA[j + 1] - fA[j]): " << (fA[j + 1] - fA[j]) << endl;
    cout << "(A[j + 1] - A[j]): " << (A[j + 1] - A[j]) << endl;
    cout << " (x - A[j]): " << (x - A[j]) << endl;
    return fA[j] + (fA[j + 1] - fA[j]) / (A[j + 1] - A[j]) * (x - A[j]);
  } };


  vector<unsigned> ans(Q);
  for (unsigned i = 0; i < Q; i++) {
    unsigned l, r;
    cin >> l >> r;
    ans.push_back(f(r) - f(l));
  }

  for (auto&& q : ans) cout << q << endl;
  return 0;
}