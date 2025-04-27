#include <iostream>
using namespace std;

int N, K;
string S;
char A[110];
int main() {
  cin >> N >> K;
  cin >> S;

  int remain = K;
  for (int i = 0; i < N; i++) {
    if (remain > 0 && S[i] == 'o') {
      A[i] = 'o';
      remain--;
    }
    else A[i] = 'x';
  }
  for (int i = 0; i < N; i++) cout << A[i];
  cout << endl;
  return 0;
}