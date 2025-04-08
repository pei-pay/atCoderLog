#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (n >= 42) n++;
  string x = "000" + to_string(n);
  cout << "AGC" + x.substr(x.size() - 3) << endl;
  return 0;
}