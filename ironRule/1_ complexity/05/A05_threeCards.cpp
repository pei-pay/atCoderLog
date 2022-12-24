#include <iostream>
using namespace std;

int N;
int K;

/**
 * Bad
 * O(N^3)
 */
 // int main() {
 //   cin >> N >> K;
 //   int count = 0;
 //   for (int i = 1; i <= N; i++) {
 //     for (int j = 1; j <= N; j++) {
 //       for (int k = 1; k <= N; k++) {
 //         if (i + j + k == K) {
 //           count++;
 //         }
 //       }
 //     }
 //   }

 //   cout << count << endl;
 //   return 0;
 // }

/**
* better
* O(N^2)
*/
int main() {
  cin >> N >> K;
  int count = 0;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      if (K - i - j <= N && 0 < K - i - j) {
        count++;
      }
    }
  }

  cout << count << endl;
  return 0;
}