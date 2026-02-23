#include <iostream>
using namespace std;

int main() {
  int a, b;
  scanf("%d-%d", &a, &b);
  ++b;
  if(b > 8) {
    ++a;
    b = 1;
  }
  printf("%d-%d", a, b);
  return 0;
}