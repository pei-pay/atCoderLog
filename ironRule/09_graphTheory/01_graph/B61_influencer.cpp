#include <iostream>
#include <vector>
using namespace std;

int N, M, A[100009], B[100009];
vector<int> G[100009];

int main() {
  cin >> N >> M;
  for (int i = 1; i <= M; i++) {
    cin >> A[i] >> B[i];
    G[A[i]].push_back(B[i]);
    G[B[i]].push_back(A[i]);
  }

  int ans = 0;
  int max = 0;
  for (int i = 1; i <= N; i++) {
    int friends = G[i].size();
    if (friends >= max) {
      max = friends;
      ans = i;
    }
  }

  cout << ans << endl;
  return 0;
}