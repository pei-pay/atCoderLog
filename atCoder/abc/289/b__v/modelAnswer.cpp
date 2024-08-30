#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> a(M);
  for (auto& x : a) cin >> x;
  vector<int> re(N + 1);
  for (auto& x : a) re[x] = 1;
  vector<int> ans;
  for (int l = 1, r = 1; l <= N; l = ++r) {
    while (re[r]) r++;
    for (int k = r; k >= l; k--) {
      ans.push_back(k);
    }
  }
  for (int i = 0; i < N; i++) cout << ans[i] << " \n"[i + 1 == N];
  return 0;
}