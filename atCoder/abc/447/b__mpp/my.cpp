#include <iostream>
#include <map>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  map<char, int> mp;
  rep(i, s.size()) {
    mp[s[i]]++;
  }
  int m = 0;
  for(auto p: mp) {
    m = max(p.second, m);
  }

  rep(i, s.size()) {
    if(mp[s[i]] != m) cout << s[i];
  }
  cout << endl;
  return 0;
}