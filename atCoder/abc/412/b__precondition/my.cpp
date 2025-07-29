#include <iostream>
using namespace std;

int main() {
  string s,t;
  cin >> s >> t;

  bool ans = true;
  for(int i = 1; i < s.size(); ++i) {
    if (isupper(s[i])){
      char x = s[i - 1];
      bool found = false;
      for(int j = 0; j < t.size(); ++j) {
        if (t[j] == x) {
          found = true;
          break;
        }
      }
      if (!found) {
        ans = false;
        break;
      }
    }
  }
  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}