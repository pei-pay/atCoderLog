#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
 * 再帰関数
 */
string func(int n) {
  if (n == 1) {
    return "1";
  } else {
    return func(n - 1) + " " + to_string(n) + " " + func(n - 1);
  }
}
int main() {
  int N;
  cin >> N;

  cout << func(N) << endl;
}