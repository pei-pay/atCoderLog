#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


/**
* [解法1]
* O(Answer * N)
* 最大のテストケースだと、1s以内に終わらない
*/
// int main() {
//   int N;
//   int L[300009], R[300009];
//   cin >> N;
//   for (int i = 1; i <= N; i++) cin >> L[i] >> R[i];

//   // 終了時刻の早いものから貪欲にとっていく
//   int CurrentTime = 0, Answer = 0;
//   while (true) {
//     int Min_End_Time = 99999; // 次に選ぶ映画の終了時刻
//     for (int i = 1; i <= N; i++) {
//       if (L[i] < CurrentTime) continue;
//       Min_End_Time = min(Min_End_Time, R[i]);
//     }
//     if (Min_End_Time == 99999) break;
//     CurrentTime = Min_End_Time;
//     Answer += 1;
//   }

//   cout << Answer << endl;
//   return 0;
// }

/**
* [解法2]
* O(NlogN)
* 映画を終了時刻の先に早い順にソートしてしまう
*/
int main() {
  int N;
  int L[300009], R[300009];
  vector<pair<int, int>> temp;

  // 入力
  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> L[i] >> R[i];
    temp.push_back(make_pair(R[i], L[i]));
  }

  // ソート
  sort(temp.begin(), temp.end());
  for (int i = 1; i <= N; i++) {
    R[i] = temp[i - 1].first;
    L[i] = temp[i - 1].second;
  }

  // 終了時刻の早いものから貪欲に取っていく(ソートされているので、1回のループで済む)
  int CurrentTime = 0, Answer = 0;
  for (int i = 1; i <= N; i++) {
    if (CurrentTime <= L[i]) {
      CurrentTime = R[i];
      Answer += 1;
    }
  }

  cout << Answer << endl;
}