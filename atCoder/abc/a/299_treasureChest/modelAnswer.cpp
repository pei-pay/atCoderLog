#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  vector<int> x;
  int y;

  rep(i, n) {
    if (s[i] == '|') x.push_back(i);
    if (s[i] == '*') y = i;
  }

  if (x[0] < y && y < x[1]) cout << "in" << endl;
  else cout << "out" << endl;

  return 0;
}