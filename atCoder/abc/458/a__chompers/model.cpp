#include <iostream>
using namespace std;

int main() {
  string s;
  int n;
  cin >> s >> n;
  cout << s.substr(n, s.size() - n*2) << endl;
  return 0;
}