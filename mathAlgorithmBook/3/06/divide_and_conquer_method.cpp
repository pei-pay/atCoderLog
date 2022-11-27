#include <iostream>
using namespace std;

/*
* N個の整数の合計値を分割統治法で求める
*/

int N, A[109];

int solve(int l, int r) {
  if(r - l == 1) return A[l];
  int m = (r + l) / 2;
  int s1 = solve(l, m);
  int s2 = solve(m, r);
  return s1 + s2;
}

int main() {
  cin >> N;
  for(int i = 0; i < N; i++) cin >> A[i];

  int Answer = solve(0, N);

  cout << Answer << endl;

  return 0;
}