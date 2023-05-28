#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)


char normalizeChar(char x) {
  if (x == '1') return 'l';
  if (x == '0') return 'o';
  return x;
}
string normalizeString(string x) {
  rep(i, x.size()) x[i] = normalizeChar(x[i]);
  return x;
}

int main() {
  int N;
  string S, T;
  cin >> N;
  cin >> S;
  cin >> T;
  S = normalizeString(S);
  T = normalizeString(T);
  if (S == T) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}