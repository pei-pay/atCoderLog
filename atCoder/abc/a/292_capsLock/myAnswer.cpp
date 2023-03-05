#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string S;
  cin >> S;


  transform(S.begin(), S.end(), S.begin(), ::toupper);
  cout << S << endl;

  return 0;
}