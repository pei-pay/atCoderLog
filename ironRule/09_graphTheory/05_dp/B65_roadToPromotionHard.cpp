#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int N, T, A[100009], B[100009];
int Answer[100009];

vector<int> G[100009];
bool visited[100009];


/*
* 深さ優先探索(pos は現在位置)
* 返り値は社員posの階級
*/
int dfs(int pos) {
  // 最初社員posの階級を0に設定する
  visited[pos] = true;
  Answer[pos] = 0;

  rep(i, G[pos].size()) {
    int nex = G[pos][i];
    if (visited[nex] == false) {
      int ret = dfs(nex);
      Answer[pos] = max(Answer[pos], ret + 1); // 階級の更新
    }
  }

  return Answer[pos];
}

int main() {
  // 入力
  cin >> N >> T;
  rep1(i, N - 1) {
    cin >> A[i] >> B[i];
    G[A[i]].push_back(B[i]);
    G[B[i]].push_back(A[i]);
  }

  // ボスの位置から深さ優先探索
  dfs(T);

  // 出力
  rep1(i, N) {
    if (i >= 2) cout << " ";
    cout << Answer[i];
  }
  cout << "\n";


  return 0;
}