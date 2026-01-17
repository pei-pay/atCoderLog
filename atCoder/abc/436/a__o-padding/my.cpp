#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  rep(i, n - s.size()) {
    cout << 'o';
  }
  cout << s << endl;
  return 0;
}