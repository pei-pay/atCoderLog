#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * WA
*/

int H, W;
string snuke = "sunuke";

// 正しい移動かを調べる (y, x)が移動先
bool is_valid_move(vector<string>& board, vector<vector<bool>>& checked, int x, int y, int z) {

  // 移動先がマス目の外である場合
  if (x <= -1 || x >= W || y <= -1 || y >= H) {
    return false;
  }

  // 移動先が壁マス
  if (board.at(y).at(x) == snuke[z]) {
    return false;
  }

  // 既に調べているマスへの移動は調べないのでfalseを返す
  if (checked.at(y).at(x)) {
    return false;
  }

  // それ以外なら正しい移動
  return true;
}

// (y, x)にいる状態からゴールに到達できるか
// board: マス目の種類
// checked: そのマスを既に調べたかを持つ二次元配列
bool reachable(vector<string>& board, vector<vector<bool>>& checked, int x, int y, int z) {
  // ベースケース
  if (x == W && y == H) return true; // ゴールにいる状態

  /**
   * 再起ステップ
   */
  checked.at(y).at(x) = true; // すでに調べているという状態にしておく

  // 「上」「右」「下」「左」のいずれかの移動でゴールに到達できるか？
  bool result = false;

  // 上へ移動したマスからゴールに到達できるか？
  if (is_valid_move(board, checked, x, y - 1, (z + 1) % 5) && reachable(board, checked, x, y - 1, (z + 1) % 5)) {
    return false;
  }
  // 右へ移動したマスからゴールに到達できるか？
  if (is_valid_move(board, checked, x + 1, y, (z + 1) % 5) && reachable(board, checked, x + 1, y, (z + 1) % 5)) {
    result = true;
  }
  // 下へ移動したマスからゴールに到達できるか？
  if (is_valid_move(board, checked, x, y + 1, (z + 1) % 5) && reachable(board, checked, x, y + 1, (z + 1) % 5)) {
    result = true;
  }
  // 左へ移動したマスからゴールに到達できるか？
  if (is_valid_move(board, checked, x - 1, y, (z + 1) % 5) && reachable(board, checked, x - 1, y, (z + 1) % 5)) {
    result = true;
  }

  return result;
}

int main() {
  cin >> H >> W;
  vector<string> board(H);
  for (int i = 0; i < H; i++) {
    cin >> board.at(i);
  }

  // 既にそのマスを調べたかを保持する二次元配列
  // false(まだ調べていない)で初期化しておく
  vector<vector<bool>> checked(H, vector<bool>(W, false));

  if (board[0][0] != snuke[0]) {
    cout << "No" << endl;
    return 0;
  }


  // (0, 0) からゴールまで到達できるか？
  if (reachable(board, checked, 0, 0, 1)) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }

  return 0;
}