#include <bits/stdc++.h>
using namespace std;

vector<string> chess(8);
bool board[8][8];
int cnt;

void count(int row) {
  if (row==8) {
    cnt++;
    return;
  }

  for (int col=0; col<8; col++) {
    bool pass=0;
    if (chess[row][col]=='*') pass=1;
    for (int r=0;r<8;r++) {
      if (board[r][col]) {
        pass=1; 
        break;
      }
    }
    for (int r=row, c=col; r>=0&&c>=0; r--,c--) {
      if (board[r][c]) {
        pass=1; 
        break;
      } 
    }
    for (int r=row, c=col; r>=0&&c<8; r--,c++) {
      if (board[r][c]) {
        pass=1; 
        break;
      } 
    }

    if (pass) continue;

    board[row][col] = true;
    count(row+1);
    board[row][col] = false;
  }

  return;
}

int main() {
  for (int i=0;i<8;i++) cin >> chess[i];
  count(0);
  cout << cnt << endl;
  return 0;
}