#include <iostream>
using namespace std;

int main() {
  int N, Y;
  cin >> N >> Y;
  int resA = -1, resB = -1, resC = -1;

  for(int a = 0; a <= N; a++) {
    for(int b = 0; b + a <= N; b++) {
      int c = N - a - b;
      int total = 10000*a + 5000*b + 1000*c;
      if(total == Y) {
        resA = a;
        resB = b;
        resC = c;
      }
    }
  }

  cout << resA << " " << resB << " " << resC << endl;

  return 0;
}