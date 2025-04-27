#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string n;
  cin >> n;

  bool ans = true;
  rep(i, n.size() - 1) {
    if (n[i] <= n[i + 1]) {
      ans = false;
      break;
    }
  }

  cout << (ans ? "Yes" : "No") << endl;

  return 0;
}