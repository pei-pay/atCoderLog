// https://atcoder.jp/contests/abs/tasks/arc065_a
/**
 * 端っこから順に考えると芋づる式に全体が決まって行くタイプの問題
 * Greedy アルゴリズムの一種
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
  string S;
  cin >> S;
  // 後ろから順に分解するために反転する
  reverse(S.begin(), S.end());
  for(int i = 0; i < 4; i++) reverse(divide[i].begin(), divide[i].end());

  bool can = true;
  for(int i = 0; i < S.size();) {
    // 4 個の文字列たちどれかで divide できるか
    bool can2 = false;
    for(int j = 0; j < 4; j++) {
      string d = divide[j];
      // d でdivideできるか
      if(S.substr(i, d.size()) == d) {
        can2 = true;
        i+= d.size();
      }
    }
    // divideできなかったら、
    if (!can2) {
      can = false;
      break;
    }
  }

  if(can) cout << "YES" << endl;
  else cout << "NO" << endl;
  
  return 0;
}