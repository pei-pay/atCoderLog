#include <iostream>
#include <string>
using namespace std;

int N;
string S[19];
int main() {
  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> S[i];
  }
  for (int i = N; i > 0; i--) {
    cout << S[i] << endl;
  }
  return 0;
}