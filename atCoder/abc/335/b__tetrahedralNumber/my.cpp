#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for(int x = 0; x <= n; x++) {
    for(int y = 0; y <= n; y++) {
      for(int z = 0; z <= n; z++) {
        if (x + y + z <= n) {
          cout << x << " " << y << " " << z << "\n";
        }
      }
    }
  }
  return 0;
}