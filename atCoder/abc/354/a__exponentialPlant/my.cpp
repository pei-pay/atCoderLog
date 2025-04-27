#include <iostream>
using namespace std;

int main() {
  int h;
  cin >> h;
  int p = 0; // 植物の高さ
  int i = 0; // 日にち
  int x = 0;
  while (h >= p) {
    if(i == 0) {
      x = 1;
    } else {
      x *= 2;
    }
    ++i;
    p += x;
  }
  cout << i << endl;
  return 0;
}