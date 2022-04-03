// https://atcoder.jp/contests/abc061/tasks/abc061_b
#include <iostream>
using namespace std;

int main() {
  int W, H, N;
  cin >> W >> H >> N;
  int x[110], y[110], a[110];

  for(int i = 0; i < N; i++) {
    cin >> x[i] >> y[i] >> a[i];
  }

  // 1*1を一つのコマとして考えて、そのコマを2次元配列としてもつ
  bool s[H][W];
  // コマをtrueで初期化する。塗りつぶされたらfalseにする予定
  for(int h = 0; h < H; h++) {
    for(int w = 0; w < W; w++ ) {
      s[h][w] = true;
    }
  }

  for(int i = 0; i < N; i++) {
    if(a[i] == 1) {
      for(int y_1 = 0; y_1 < H; y_1++) {
        for(int x_1 = 0; x_1 < x[i]; x_1++ ) {
          s[y_1][x_1] = false;
        }
      }
    }
    if(a[i] == 2) {
      for(int y_2 = 0; y_2 < H; y_2++) {
        for(int x_2 = x[i]; x_2 < W; x_2++ ) {
          s[y_2][x_2] = false;
        }
      }
    }
    if(a[i] == 3) {
      for(int y_3 = 0; y_3 < y[i]; y_3++) {
        for(int x_3 = 0; x_3 < W; x_3++ ) {
          s[y_3][x_3] = false;
        }
      }
    }
    if(a[i] == 4) {
      for(int y_3 = y[i]; y_3 < H; y_3++) {                                                                                                      
        for(int x_3 = 0; x_3 < W; x_3++ ) {
          s[y_3][x_3] = false;
        }
      }
    }
  }

  // 白い面積(二次元配列ないでtrueな数)を求める
  int ans = 0;
  for(int h = 0; h < H; h++) {
    for(int w = 0; w < W; w++ ) {
      if(s[h][w]) ans++;
    }
  }

  cout << ans << endl;

  return 0;
}