#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  string W[110];
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> W[i];

  bool ans = false;
  for (int i = 1; i <= N; i++) {
    if (W[i] == "and" || W[i] == "not" || W[i] == "that" || W[i] == "the" || W[i] == "you") {
      ans = true;
    }
  }

  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}