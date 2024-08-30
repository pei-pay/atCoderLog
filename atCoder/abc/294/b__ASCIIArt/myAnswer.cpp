#include <iostream>
#include <string>
using namespace std;

string X[26] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" };
int main() {
  int H, W;
  int A[110][110];
  cin >> H >> W;
  for (int y = 1; y <= H; y++) {
    for (int x = 1; x <= W; x++) {
      cin >> A[y][x];
    }
  }
  string Ans[110][110];
  for (int y = 1; y <= H; y++) {
    for (int x = 1; x <= W; x++) {
      if (A[y][x] == 0) Ans[y][x] = '.';
      else Ans[y][x] = X[A[y][x] - 1];
    }
  }

  for (int y = 1; y <= H; y++) {
    for (int x = 1; x <= W; x++) {
      cout << Ans[y][x];
    }
    cout << endl;
  }

  return 0;
}