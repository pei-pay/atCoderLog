#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// B39を優先度付きキューを使ってO(NlogN)で解く

long long N, D;
long long X[200009], Y[200009];
vector<long long> G[200009];
long long Answer = 0;

int main() {
  cin >> N >> D;
  for (int i = 1; i <= N; i++) {
    cin >> X[i] >> Y[i];
    G[X[i]].push_back(Y[i]);
  }

  priority_queue<long long> Q;
  for (int i = 1; i <= D; i++) {
    for (int j : G[i]) Q.push(j);

    if (!Q.empty()) {
      Answer += Q.top();
      Q.pop();
    }
  }

  cout << Answer << endl;

  return 0;
}