#include <iostream>
#include <algorithm>
using namespace std;

int N, K, X[59], Y[59];
long long Answer = (1LL << 62); // ありえない値に設定


int check_num_points(int lx, int rx, int ly, int ry) {
  int cnt = 0;
  for (int i = 1; i <= N; i++) {
    // 点(X[i], Y[i]) が長方形に含まれているかどうかを判定する
    if (lx <= X[i] && X[i] <= rx && ly <= Y[i] && Y[i] <= ry) cnt++;
  }
  return cnt;
}

int main() {
  cin >> N >> K;
  for (int i = 1; i <= N; i++) cin >> X[i] >> Y[i];

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      for (int k = 1; k <= N; k++) {
        for (int l = 1; l <= N; l++) {
          int cl = X[i]; // 左端のx座標
          int cr = X[j]; // 右端のx座標
          int dl = Y[k]; // 下端のy座標
          int dr = Y[l]; // 上端のy座標
          if (check_num_points(cl, cr, dl, dr) >= K) {
            long long area = 1LL * (cr - cl) * (dr - dl);
            Answer = min(Answer, area);
          }
        }
      }
    }
  }

  cout << Answer << endl;

  return 0;
}