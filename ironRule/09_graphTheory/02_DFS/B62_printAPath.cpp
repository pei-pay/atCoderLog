#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int N, M, A[100009], B[100009];
vector<int> G[100009];
bool visited[100009];
stack<int> Path, Answer; // 移動経路の跡

void dfs(int pos) {
  // ゴール!!!
  if (pos == N) {
    Answer = Path;
    return;
  }

  visited[pos] = true;
  for (int i = 0; i < G[pos].size(); i++) {
    int nex = G[pos][i];
    if (visited[nex] == false) {
      Path.push(nex); // 頂点 nex を経路に追加
      dfs(nex);
      Path.pop();  // 頂点 nex を経路から削除
    }
  }
  return;
}

int main() {
  cin >> N >> M;
  for (int i = 1; i <= M; i++) {
    cin >> A[i] >> B[i];
    G[A[i]].push_back(B[i]);
    G[B[i]].push_back(A[i]);
  }

  // 深さ優先探索
  for (int i = 1; i <= N; i++) visited[i] = false;
  Path.push(1);
  dfs(1);

  // スタックの要素を下から順に記録
  vector<int> Output;
  while (!Answer.empty()) {
    Output.push_back(Answer.top());
    Answer.pop();
  }
  reverse(Output.begin(), Output.end());

  // 出力
  for (int i = 0; i < Output.size(); i++) {
    if (i >= 1) cout << " ";
    cout << Output[i];
  }
  cout << endl;

  return 0;
}