#include <iostream>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  bool ans = true;
  for(int i = 1; i < s.size(); ++i) {
    if (isupper(s[i])) {
      if(t.find(s[i - 1]) == string::npos) {
        ans = false;
        break;
      }
    }
  }
  cout << (ans ? "Yes" : "No") << endl; 
  return 0;
}