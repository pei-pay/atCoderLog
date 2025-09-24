#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  vector<string> s = { "ABC", "ARC", "AGC", "AHC" };

  rep(i, 3) {
    string x;
    cin >> x;
    auto it = find(s.begin(), s.end(), x);
    s.erase(it);
  }

  cout << s[0] << endl;
  return 0;
}