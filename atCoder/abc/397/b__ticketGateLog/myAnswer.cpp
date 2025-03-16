#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;

  int cnt = 0;
  string x = "";
  int i = 0;
  int j = 0;

  while (i < s.size()) {
    if (j % 2 == 0) {
      if (s[i] == 'i') {
        x.push_back(s[i]);
        i++;
      }
      else {
        x.push_back('i');
        cnt++;
      }
    }
    else {
      if (s[i] == 'o') {
        x.push_back(s[i]);
        i++;
      }
      else {
        x.push_back('o');
        cnt++;
      }
    }
    j++;
  }

  if (x.size() % 2 != 0) {
    cnt++;
  }

  cout << cnt << endl;

  return 0;
}