#include <iostream>
#include <vector>
// #include <string>
// #include <algorithm>
using namespace std;


bool check_connected(vector<vector<char>> &board) {
  vector<vector<bool>> checked(10, vector<bool>(10, false));

  // 陸地マスを探す
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

  fill_island(board, checked, y , x);

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
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      cin >> board[i][j] << endl;
    }
  }

  for(int y = 0; y < 10; y++) {
    for(int x = 0; x < 10; x++) {
      if(board[y][x] == 'o') continue;

      board[y][x] = 'o';
      if(check_connected(board)) {
        cout << "Yes" << endl;
        return 0;
      }

      board[y][x] = 'x'
    }
  }

  cout << "No" << endl;

  
  return 0;
}