#include <iostream>
#include <string>
#include <map>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

/**
 * テストが1つ通らず、不正解。
 * 文字列が2*10^5ぐらい長い場合は無理?
*/

string S, T;
string z = "abcdefghijklmnopqrstuvwxyz";
string atcoder = "atcoder";
int main() {
  cin >> S;

  cin >> T;

  map<char, int> mapS;
  map<char, int> mapT;
  rep(i, S.size()) {
    mapS[S[i]] += 1;
  }
  rep(i, T.size()) {
    mapT[T[i]] += 1;
  }

  rep(i, z.size()) {
    // どちらもない場合
    if (mapS[z[i]] == 0 && mapT[z[i]] == 0) {
      continue;
    }
    // 数が同じ場合
    if (mapS[z[i]] == mapT[z[i]]) continue;
    // Sの方が多い場合
    if (mapS[z[i]] > mapT[z[i]]) {
      if (atcoder.find(z[i]) == string::npos) {
        cout << "No" << endl;
        return 0;
      }
      else {
        if (mapT['@'] <= 0) {
          cout << "No" << endl;
          return 0;
        }
        else {
          mapT['@'] -= 1;
        }
      }
    }
    // Tの方が多い場合
    else {
      if (atcoder.find(z[i]) == string::npos) {
        cout << "No" << endl;
        return 0;
      }
      else {
        if (mapS['@'] <= 0) {
          cout << "No" << endl;
          return 0;
        }
        else {
          mapS['@'] -= 1;
        }
      }
    }
  }

  cout << "Yes" << endl;

  return 0;
}