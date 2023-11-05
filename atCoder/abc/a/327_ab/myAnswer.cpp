#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;

  cin >> n;
  cin >> s;
  rep(i, n) {
    if (s[i] == 'a' && s[i + 1] == 'b') {
      cout << "Yes" << endl;
      return 0;
    }
    else if (s[i] == 'b' && s[i + 1] == 'a') {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}