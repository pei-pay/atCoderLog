#include <iostream>
using namespace std;

int main() {
  int N, K, A[59];
  int sum = 0;
  cin >> N >> K;
  for(int i = 0; i < N; i++) cin >> A[i];
  for(int i = 0; i < N; i++) sum += A[i];

  if(sum % 2 != K % 2) cout << "No" << endl;
  else if(sum > K) cout << "No" << endl;
  else cout << "Yes" << endl;

  return 0;
}
