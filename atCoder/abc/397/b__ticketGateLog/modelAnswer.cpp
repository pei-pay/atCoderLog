#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  char target = 'i';
  for (char c : s) {
    if (c == target) target = target == 'i' ? 'o' : 'i';
    else ans++;
  }
  if (target == 'o') ans++;
  cout << ans << endl;

  return 0;
}