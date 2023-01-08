#include <iostream>
using namespace std;

int T;
int Answer[110];
int main() {
  cin >> T;
  for (int i = 1; i <= T; i++) {
    int N;
    int A[110];
    int ans = 0;
    cin >> N;
    for (int j = 1; j <= N; j++) cin >> A[j];

    for (int j = 1; j <= N; j++) {
      if (A[j] % 2 != 0) ans += 1;
    }

    Answer[i] = ans;
  }

  for (int i = 1; i <= T; i++) cout << Answer[i] << endl;
  return 0;
}