#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  int x;
  string y;
  cin >> x >> y;

  if(s[x - 1] == y) {
    cout << "Yes" << endl;
  }else {
    cout << "No" << endl;
  }

  return 0;
}