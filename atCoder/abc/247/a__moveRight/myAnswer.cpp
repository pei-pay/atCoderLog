#include <iostream>
#include <string>
// #include <algorithm>
using namespace std;

int main() {
  string S;
  cin >> S;
  string ans = "0000";
  if (S[0] == '1') ans[1] = '1';
  if (S[1] == '1') ans[2] = '1';
  if (S[2] == '1') ans[3] = '1';

  cout << ans << endl;
  return 0;
}