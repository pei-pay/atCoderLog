#include <iostream>
#include <string>
using namespace std;

int main() {
  string N;
  cin >> N;

  int Answer = 0;
  for (int i = 0; i < N.size(); i++) {
    int digit;
    int rank = (1 << (N.size() - i - 1));
    if (N[i] == '0') digit = 0;
    if (N[i] == '1') digit = 1;
    Answer += digit * rank;
  }

  cout << Answer << endl;
  return 0;
}