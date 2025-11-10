#include <iostream>
using namespace std;

int main() {
  string t, u;
  cin >> t >> u;
  int cnt = 0;
  int tIndex = 0;
  int uIndex = 0;
  while (tIndex != t.size()) {
    cout << t[tIndex] << " " << u[uIndex] << endl;
    if (cnt == u.size()) break;
    if (t[tIndex] == u[uIndex]) {
      cnt++;
      tIndex++;
      uIndex++;
    }
    else if (t[tIndex] == '?') {
      cnt++;
      tIndex++;
      uIndex++;
    }
    else {
      cnt = 0;
      uIndex = 0;
      tIndex++;
    }
  }

  if (cnt == u.size()) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}