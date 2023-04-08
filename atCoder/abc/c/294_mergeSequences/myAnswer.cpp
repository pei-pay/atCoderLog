#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// 定義
int N, M;
int A[100009], B[100009];
priority_queue<int, vector<int>, greater<int>> AQ;
priority_queue<int, vector<int>, greater<int>> BQ;

int main() {
  // 入力
  cin >> N >> M;
  for (int i = 1; i <= N; i++) cin >> A[i];
  for (int i = 1; i <= M; i++) cin >> B[i];
  for (int i = 1; i <= N; i++) AQ.push(A[i]);
  for (int i = 1; i <= M; i++) BQ.push(B[i]);

  vector<long long> AX;
  vector<long long> BX;
  for (long long i = 1; i <= N + M; i++) {
    if (AQ.empty()) {
      BX.push_back(i);
      BQ.pop();
    }
    else if (BQ.empty()) {
      AX.push_back(i);
      AQ.pop();
    }
    else if (AQ.top() < BQ.top()) {
      AX.push_back(i);
      AQ.pop();
    }
    else {
      BX.push_back(i);
      BQ.pop();
    }
  }

  for (int i = 0; i < AX.size(); i++) {
    cout << AX[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < BX.size(); i++) {
    cout << BX[i] << " ";
  }
  cout << endl;


  return 0;
}