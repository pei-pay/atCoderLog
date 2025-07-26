#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  int index = 0;
  while (index < s.size()) {
    if(s[index] == '#') {
      cout << index + 1 << ",";
      for(int i = index + 1; i < s.size(); ++i) {
        if (s[i] == '#') {
          cout << i + 1 << endl;
          index = i;
          break;
        }
      }
    }
    ++index;
  }
  return 0;
}