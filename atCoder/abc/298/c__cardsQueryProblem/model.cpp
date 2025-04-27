#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)


const int N = 200010;
const int M = 200010;
vector<vector<int>> box(N, vector<int>());
vector<vector<int>> card(M, vector<int>());

int main() {
  int n, q;
  cin >> n >> q;
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      int i, j;
      cin >> i >> j;
      card[i].push_back(j);
      box[j].push_back(i);
    }
    else if (t == 2) {
      int i;
      cin >> i;
      sort(box[i].begin(), box[i].end());
      rep(j, box[i].size()) {
        cout << box[i][j] << "\n "[j + 1 != box[i].size()];
      }
    }
    else {
      int i;
      cin >> i;
      sort(card[i].begin(), card[i].end());
      card[i].erase(unique(card[i].begin(), card[i].end()), card[i].end());
      rep(j, card[i].size()) {
        cout << card[i][j] << "\n "[j + 1 != card[i].size()];
      }
    }
  }

  return 0;
}