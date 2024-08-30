#include <iostream>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  while (true) {
    bool fin = 1;
    for (int i = 0; i < (int)s.size() - 1; i++) {
      if (s.substr(i, 2) == "na") {
        s.insert(s.begin() + i + 1, 'y');
        fin = 0;
        break;
      }
    }
    if (fin) break;
  }

  cout << s << endl;

  return 0;
}