#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;

  string T;

  for (int i = 0; i < S.size(); i += 2) {
    T += S[i + 1];
    T += S[i];
  }

  cout << T << endl;

  return 0;
}