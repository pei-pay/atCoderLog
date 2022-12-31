#include <iostream>
#include <queue>
using namespace std;

int N, X;
char A[100009];
queue<int> Q;

int main() {
  cin >> N >> X;
  for (int i = 1; i <= N; i++) cin >> A[i];

  Q.push(X);
  A[X] = '@';

  while (!Q.empty()) {

  }





  return 0;
}