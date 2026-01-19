#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vi = vector<int>;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  vi v = { a, b, c };
  sort(v.begin(), v.end());
  cout << v[2] << v[1] << v[0] << endl;
  return 0;
}