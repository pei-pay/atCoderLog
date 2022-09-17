#include <iostream>
using namespace std;

int H, W, A[2009][2009];
int sumOfRows[2009];    // 行の総和
int sumOfColumns[2009]; // 列の総和
int Answers[2009][2009];

int main() {
  cin >> H >> W;
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) cin >> A[i][j];
  }

  for (int y = 1; y <= H; y++) {
    sumOfRows[y] = 0;
    for (int x = 1; x <= W; x++) {
      sumOfRows[y] += A[y][x];
    }
  }
  for (int x = 1; x <= W; x++) {
    sumOfColumns[x] = 0;
    for (int y = 1; y <= H; y++) {
      sumOfColumns[x] += A[y][x];
    }
  }

  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      Answers[i][j] = sumOfRows[i] + sumOfColumns[j] - A[i][j];
    }
  }

  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      if (j >= 2) cout << " ";
      cout << Answers[i][j];
    }
    cout << endl;
  }

  return 0;
}