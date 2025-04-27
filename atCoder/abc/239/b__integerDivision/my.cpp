#include <iostream>
#include <string>
using namespace std;

int main() {
  string x;
  cin >> x;
  if (x == "0") {
    cout << 0 << endl;
  }
  else if (x[x.size() - 1] == '0') {
    cout << x.substr(0, x.size() - 1) << endl;
  }
  else if (x[0] == '-') {
    long long num = stoi(x);
    cout << num / 10 - 1 << endl;
  }
  else {
    if (x.size() == 1) {
      cout << 0 << endl;
    }
    else {
      cout << x.substr(0, x.size() - 1) << endl;
    }
  }
  return 0;
}