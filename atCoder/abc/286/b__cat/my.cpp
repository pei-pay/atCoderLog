#include <iostream>
#include <string>
#include <vector>
using namespace std;

int N;
string S;
vector<char> A;
int main() {
  cin >> N;
  cin >> S;
  for (int i = 0; i < N; i++) {
    if (S[i] == 'n' && S[i + 1] == 'a') {
      A.push_back('n');
      A.push_back('y');
      A.push_back('a');
      i++;
    }
    else {
      A.push_back(S[i]);
    }
  }

  for (int i = 0; i < A.size(); i++) {
    cout << A[i];
  }

  cout << endl;
  return 0;
}