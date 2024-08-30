#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  int A[200009];
  int B[200009];

  cin >> N;
  for (int i = 1; i <= N; i++) cin >> A[i];

  for (int i = 1; i <= N; i++) B[i] = 0;

  for (int i = 1; i <= N; i++) {
    if (B[i] == 0) {
      B[A[i]] = 1;
    }
  }

  int ans = 0;
  vector<int> C(0);

  for (int i = 1; i <= N; i++) {
    if (B[i] == 0) {
      ans++;
      C.push_back(i);
    }
  }
  cout << ans << endl;
  for (size_t i = 0; i < C.size(); i++) {
    cout << C[i];
    if (i != C.size() - 1) cout << " ";
  }
  cout << endl;

  return 0;
}