#include <iostream>
#include <string>
using namespace std;

int ctoi(char c) {
  switch (c) {
  case '0': return 0;
  case '1': return 1;
  case '2': return 2;
  case '3': return 3;
  case '4': return 4;
  case '5': return 5;
  case '6': return 6;
  case '7': return 7;
  case '8': return 8;
  case '9': return 9;
  default: return 0;
  }
}

int main() {
  int R, C;
  cin >> R >> C;
  char B[29][29];
  for (int y = 1; y <= R; y++) {
    for (int x = 1; x <= C; x++) {
      cin >> B[y][x];
    }
  }

  for (int y = 1; y <= R; y++) {
    for (int x = 1; x <= C; x++) {
      int z = 0;
      if (B[y][x] == '.' || B[y][x] == '#') continue;
      z = ctoi(B[y][x]);
      for (int ya = 1; ya <= R; ya++) {
        for (int xa = 1; xa <= C; xa++) {
          if (abs(y - ya) + abs(x - xa) <= z) {
            if (B[ya][xa] == '#') B[ya][xa] = '.';
          }
        }
      }
      B[y][x] = '.';
    }
  }

  for (int y = 1; y <= R; y++) {
    for (int x = 1; x <= C; x++) {
      cout << B[y][x];
    }
    cout << endl;
  }


  return 0;
}