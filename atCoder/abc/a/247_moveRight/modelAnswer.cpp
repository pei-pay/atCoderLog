#include <bits/stdc++.h>
using namespace std;
int main() {
  string S;
  cin >> S;
  string T(4, 0);
  T[0] = '0';
  T[1] = S[0];
  T[2] = S[1];
  T[3] = S[2];
  cout << T;
}
