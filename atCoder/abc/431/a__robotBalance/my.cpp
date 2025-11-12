#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int h, b;
  cin >> h >> b;

  if(h > b) {
    cout << h - b << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}