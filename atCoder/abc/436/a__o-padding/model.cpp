#include <iostream>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  string t(n - s.size(), 'o');
  cout << t << s << endl;
  return 0;
}