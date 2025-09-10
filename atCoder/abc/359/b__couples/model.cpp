#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi a(n * 2);
  for (auto& v : a) cin >> v;

  int res = 0;
  for (int i = 0; i < n * 2 - 2; i++)
    if (a[i] == a[i + 2]) res++;
  cout << res << endl;
  return 0;
}