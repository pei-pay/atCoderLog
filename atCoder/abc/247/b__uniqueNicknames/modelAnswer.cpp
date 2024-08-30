#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  cin >> N;
  string s[110], t[110];
  for (int i = 0; i < N; i++) cin >> s[i] >> t[i];

  for (int i = 0; i < N; i++) {
    bool iCan = false;
    bool sCan = true;
    bool tCan = true;
    for (int j = 0; j < N; j++) {
      if (i != j) {
        if (s[i] == s[j] || s[i] == t[j]) {
          sCan = false;
        }
        if (t[i] == s[j] || t[i] == t[j]) {
          tCan = false;
        }
      }
    }

    if (sCan || tCan) {
      iCan = true;
    }

    if (!iCan) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}