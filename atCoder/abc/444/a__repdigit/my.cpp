#include <iostream>
#include <set>
using namespace std;

int main() {
  int n;
  cin >> n;
  set<int> st;
  while (n > 0) {
    int x = n % 10;
    st.insert(x);
    n /= 10;
  }
  if(st.size() == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}