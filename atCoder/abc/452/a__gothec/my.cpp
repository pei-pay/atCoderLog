#include <iostream>
#include <set>
using namespace std;

int main() {
  int m, d;
  cin >> m >> d;
  set<int> st = {3, 5, 7, 9};
  if(st.count(m) && m == d) cout << "Yes" << endl;
  else if (m == 1 && d == 7) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}