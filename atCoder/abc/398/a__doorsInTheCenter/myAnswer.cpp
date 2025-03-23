#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  if (n % 2 == 0) {
    rep(i, n) {
      if (n / 2 == i + 1) {
        cout << "=";
      }
      else if (n / 2 == i) {
        cout << "=";
      }
      else {
        cout << "-";
      }
    }
  }
  else {
    rep(i, n) {
      if (n / 2 == i) {
        cout << "=";
      }
      else {
        cout << "-";
      }
    }
  }
  cout << endl;

  return 0;
}