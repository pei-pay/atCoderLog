#include <iostream>
using namespace std;


int CE(int n, int r) {
  long long fact_n = 1;
  long long fact_r = 1;
  long long fact_nr = 1;
  for(int i = 1; i <= n; i++) fact_n *= i;
  for(int i = 1; i <= r; i++) fact_r *= i;
  for(int i = 1; i <= n - r; i++) fact_nr *= i;

  return fact_n / (fact_r * fact_nr);
}

int main() {
  long long  n, r;
  cin >> n >> r;

  cout << CE(n, r) << endl;
  return 0;
}