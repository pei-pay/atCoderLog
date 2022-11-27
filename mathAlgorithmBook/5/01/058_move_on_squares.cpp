#include <iostream>
using namespace std;

long long N, X, Y;

int main() {
  cin >> N >> X >> Y;

  bool ans = true;

  if(abs(X) + abs(Y) > N) ans = false;
  if((X + Y) % 2 != N % 2) ans = false;

  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}