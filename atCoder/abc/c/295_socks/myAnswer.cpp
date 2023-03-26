#include <iostream>
#include <set>
using namespace std;

int N;
int A[500009];
set<int> S;
int main() {
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> A[i];

  int ans = 0;
  for (int i = 1; i <= N; i++) {
    if (S.count(A[i])) {
      ans++;
      S.erase(A[i]);
    }
    else {
      S.insert(A[i]);
    }
  }

  cout << ans << endl;

  return 0;
}