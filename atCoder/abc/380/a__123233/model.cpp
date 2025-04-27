#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi mem(10, 0);
  while (n > 0) {
    mem[n % 10]++;
    n /= 10;
  }

  if(mem[1] == 1 && mem[2] == 2 && mem[3] == 3) cout << "Yes" << "\n";
  else cout << "No" << "\n";
  return 0;
}