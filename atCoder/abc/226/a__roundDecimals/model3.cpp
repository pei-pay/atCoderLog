#include <iostream>
using namespace std;

int main() {
  int a, b;
  scanf("%d.%d", &a, &b);
  if (b / 100 >= 5) a++;
  cout << a << endl;
  return 0;
}