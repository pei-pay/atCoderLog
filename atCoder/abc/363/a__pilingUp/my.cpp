#include <iostream>
using namespace std;

int main() {
  int r;
  cin >> r;
  if (r <= 99) {
    cout << 100 - r << endl;
  } else if (r <= 199) { 
    cout << 200 - r << endl;   
  } else if (r <= 299) {
    cout << 300 - r << endl;   
  } 
  return 0;
}