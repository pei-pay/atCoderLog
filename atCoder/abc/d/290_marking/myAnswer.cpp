#include <iostream>
#include <vector>
using namespace std;

int T;
int N, D, K;
int main() {
  cin >> T;
  for (int i = 1; i <= T; i++) {
    cin >> N >> D >> K;

    // マスの印を管理
    vector<int> m(N);
    // 初手: マス0に印をつける
    m[0] = 1;
    // 最後に印をつけたマスの番号
    int A = 0;
    if (K == 1) {
      cout << 0 << endl;
      continue;
    }

    for (int i = 2; i <= K; i++) {
      int pos = (A + D) % N;
      if (m[pos] == 0) {
        m[pos] = 1;
        A = pos;
        if (i == K) {
          cout << A << endl;
        }
        continue;
      }
      while (true) {
        pos = (pos + 1) % N;
        if (m[pos] == 0) {
          m[pos] = 1;
          A = pos;
          if (i == K) {
            cout << A << endl;
          }
          break;
        }
      }
    }
  }
  return 0;
}