#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string x;
  cin >> x;
  while (x.back() == '0') { x.pop_back(); }
  if (x.back() == '.') { x.pop_back(); }
  cout << x << "\n";
  
  return 0;
}