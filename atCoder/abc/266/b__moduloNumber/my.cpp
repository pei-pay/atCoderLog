#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;
  long long a = 998244353;

  if (n % a == 0) {
    cout << 0 << endl;
    return 0;
  }

  int z = 100'000'000;

  for(int i = 1; i <= z; ++i) {
    long long temp = a * i;
    if (0 <= n) {
      long long x = n - temp;
      if (0 <= x && x < a) {
        cout << x << endl;
        return 0;
      }  
    } else {
      long long x = temp + n;
      if (0 <= x && x < a) {
        cout << x << endl;
        return 0;
      }  
    }
    
  }

  return 0;
}