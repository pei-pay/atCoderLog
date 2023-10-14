#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


bool compare(pair<int, int> a, pair<int, int> b) {
  if (a.first == b.first) {
    return a.second < b.second;
  }
  else {
    return a.first > b.first;
  }
}

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  vector<pair<int, int>> p;
  rep(i, n) {
    int win = 0;
    rep(j, n) {
      if (s[i][j] == 'o') win++;
    }
    p.push_back(make_pair(win, i));
  }

  sort(p.begin(), p.end(), compare);
  rep(i, n) {
    cout << p[i].second + 1 << " ";
  }
  cout << endl;

  return 0;
}