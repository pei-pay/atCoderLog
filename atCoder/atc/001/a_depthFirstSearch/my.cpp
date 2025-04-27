#include <iostream>
#include <vector>
using namespace std;

bool isValidMove(vector<vector<char>> &board, vector<vector<bool>> &checked, int x, int y) {
  int H = board.size();
  int W = board[0].size();

  if(x <= -1 || y<= -1 || x >= W || y >= H) return false;
  if(checked[y][x]) return false;
  if(board[y][x] == '#') return false;

  return true;
}

// (startX, startY) から (endX, endY) に辿り着けるか
bool reachable(vector<vector<char>> &board, vector<vector<bool>> &checked, int startX, int startY, int endX, int endY) {
  // ベースケース
  if(startX == endX && startY == endY) return true;

  // すでに調べた状態にしておく
  checked[startY][startX] = true;

  bool result = false;
  // 上へ移動したマスからゴールに辿り着けるか
  if(isValidMove(board, checked, startX, startY-1) && reachable(board, checked, startX, startY-1, endX, endY)) {
    result = true;
  }
  // 右へ移動したマスからゴールに辿り着けるか
  if(isValidMove(board, checked, startX-1, startY) && reachable(board, checked, startX-1 , startY, endX, endY)) {
    result = true;
  }
  // 下へ移動したマスからゴールに辿り着けるか
  if(isValidMove(board, checked, startX, startY+1) && reachable(board, checked, startX, startY+1, endX, endY)) {
    result = true;
  }
  // 左へ移動したマスからゴールに辿り着けるか
  if(isValidMove(board, checked, startX+1, startY) && reachable(board, checked, startX+1, startY, endX, endY)) {
    result = true;
  }

  return result;
}

int main() {
  //  入力
  int H, W;
  cin >> H >> W;
  vector<vector<char>> board(H, vector<char>(W));
  for(int i = 0; i < H; i++) {
    for(int j = 0; j < W; j++) {
      cin >> board[i][j];
    }
  }

  // スタートとゴール地点を見つける
  int startY, startX;
  int endY, endX;
  for(int i = 0; i < H; i++) {
    for(int j = 0; j < W; j++) {
      if(board[i][j] == 's') {
        startY = i;
        startX = j;
      }
      if(board[i][j] == 'g') {
        endY = i;
        endX = j;
      }
    }
  }

  // 既にそのマスを調べたかを保持する二次元配列
  vector<vector<bool>> checked(H, vector<bool>(W, false));  // false(まだ調べていない)で初期化しておく


  // 出力
  if(reachable(board, checked, startX, startY, endX, endY)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}