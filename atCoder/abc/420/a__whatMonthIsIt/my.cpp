#include <iostream>
using namespace std;

int main() {
  int x,y;
  cin >> x >> y;
  int z = (x + y) % 12;
  if (z == 0) cout << 12 << endl; 
  else cout  << z << endl;
  return 0;
}