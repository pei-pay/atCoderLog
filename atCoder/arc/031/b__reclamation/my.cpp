#include <iostream>
#include <vector>
// #include <string>
// #include <algorithm>
using namespace std;

// (x, y) から到達できる全ての陸地マスのcheckedをtrueにする (再起関数)
void fill_island(vector<vector<char>> &board, vector<vector<bool>> &checked, int y, int x) {

  // ベースケース
  if(y < 0 || x < 0 | y >= 10 | x >= 10) return; // 10*10のマスを超える場合
  if(board[y][x] == 'x') return; // 海の場合
  if(checked[y][x]) return; // 調査済みの場合

  checked[y][x] = true;

  // (x, y)から一マス隣を調べる
  fill_island(board, checked, y - 1, x); // 上
  fill_island(board, checked, y, x + 1); // 右
  fill_island(board, checked, y + 1, x); // 左
  fill_island(board, checked, y, x - 1); // 下
}


bool check_connected(vector<vector<char>> &board) {
  vector<vector<bool>> checked(10, vector<bool>(10, false));

  // 陸地マスを一箇所探す
  int y, x;
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      if(board[i][j] == 'o') {
        y = i;
        x = j;
        break;
      }
    }
  }

  /**
  * 探し当てた陸地マスから、到達できる陸地マスをcheckする
  * board: 盤面
  * checked: 二次元配列。到達できた陸地マスのtrueにする
  * x,y: 一箇所探した陸地マス
  */ 
  fill_island(board, checked, y , x);

  /**
  * boardとcheckedを比較
  * boardが陸なのに、checkedがfalseの場合(=到達できない陸地マスがある)を調べる
  */
  bool ok = true;
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      if(board[i][j] == 'o') {
        if(!checked[i][j]) {
          ok = false;
        }
      }
    }
  }

  return ok;
}

int main() {
  vector<vector<char>> board(10, vector<char>(10));

  // 入力
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      cin >> board[i][j];
    }
  }

  // マスを全探索
  for(int y = 0; y < 10; y++) {
    for(int x = 0; x < 10; x++) {
      // もともと陸なら対象外
      if(board[y][x] == 'o') continue;

      // 一箇所埋めてみる
      board[y][x] = 'o';

      // 陸マスが繋がってるか調べる
      if(check_connected(board)) {
        cout << "YES" << endl;
        return 0;
      }
      // 埋めた箇所を元に戻す
      board[y][x] = 'x';
    }
  }

  cout << "NO" << endl;

  
  return 0;
}