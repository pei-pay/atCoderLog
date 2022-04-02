// https://atcoder.jp/contests/abc061/tasks/abc061_b

#include <iostream>
using namespace std;

int main() {
  // N個の都市とM本の道路
  int N, M;
  cin >> N >> M;

  // A[i]番目の都市とB[i]番目の都市はi番目の道路で繋がっている
  int A[50], B[50];

  for(int i = 0; i < M; i++) {
    cin >> A[i] >> B[i];
  }

  // 他の都市に伸びている道路の本数を都市ごとに持つ
  int res[50] = {0};
  for(int i = 0; i < M; i++) {
    res[A[i] - 1]++;
    res[B[i] - 1]++;
  }

  for(int i = 0; i < N; i++) {
    cout << res[i] << endl;
  }
}