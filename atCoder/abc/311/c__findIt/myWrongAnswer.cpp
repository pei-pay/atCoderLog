#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int n;
int a[200009];
vector<int> g[200009];
bool visited[200009];
vector<int> ans[200009];

void isClosed(int start, int pos) {
  visited[pos] = true;
  if (g[pos].size() == 0) {
    ans[start] = {};
  }
  rep(i, g[pos].size()) {
    int nex = g[pos][i];
    if (nex == start) {
      // 閉じた!!
      break;
    }
    else {
      if (visited[nex] == false) {
        ans[start].push_back(nex);
        isClosed(start, nex);
      }
    }
  }
}

int main() {
  // 入力
  cin >> n;
  rep1(i, n) {
    cin >> a[i];
    // グラフの作成
    g[i].push_back(a[i]);
  }

  // 初期化
  rep1(i, n) visited[i] = false;

  rep1(i, n) {
    // if (visited[i]) continue;
    isClosed(i, i);
  }
  rep(i, n) {
    if (ans[i].size()) {
      cout << ans[i].size() + 1 << endl;
      cout << i << " ";
      rep(j, ans[i].size()) {
        cout << ans[i][j] << " ";
      }
      cout << endl;
      // break;
    }
  }
  return 0;
}