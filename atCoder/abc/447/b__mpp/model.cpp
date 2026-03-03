#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  string s;
  cin >> s;
  vi cnt(26, 0);
  for (char c : s) cnt[c - 'a']++;
  int ma = *max_element(cnt.begin(), cnt.end());
  for (char c : s) {
    if (cnt[c - 'a'] != ma) cout << c;
  }
  cout << endl;
  return 0;
}