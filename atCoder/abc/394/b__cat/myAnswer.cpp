#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  sort(s.begin(), s.end(), [](const string a, string b) {
    return a.size() < b.size();
    });

  rep(i, n) {
    cout << s[i];
  }
  cout << endl;

  return 0;
}