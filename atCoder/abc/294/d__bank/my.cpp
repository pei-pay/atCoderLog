#include <iostream>
#include <set>
#include <queue>
using namespace std;

/**
 * 解けず...
*/
int main() {
  int N, Q;
  cin >> N >> Q;
  int X[500009];
  int Y[500009];
  set<int> S;
  queue<int> Queue;
  for (int i = 1; i <= Q; i++) {
    cin >> X[i];
    if (X[i] == 2) cin >> Y[i];
  }

  for (int i = 1; i <= N; i++) Queue.push(i);

  for (int i = 1; i <= Q; i++) {
    if (X[i] == 1) {
      S.insert(Queue.front());
      Queue.pop();
    }
    else if (X[i] == 2) {
      S.erase(Y[i]);
    }
    else {
      // .S.begin();
    }
  }

  return 0;
}