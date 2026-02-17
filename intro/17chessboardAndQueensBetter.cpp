#include <bits/stdc++.h>
using namespace std;

vector<string> chess(8);
bool c[8],ld[15],rd[15];
int cnt;

void count(int row) {
  if (row==8) {
    cnt++;
    return;
  }

  for (int col=0; col<8; col++) {

    if (chess[row][col]=='*') continue;
    if ((c[col])||(rd[row+col])||(ld[row-col+7])) continue;

    c[col] = true;
    rd[row+col] = true;
    ld[row-col+7] = true;

    count(row+1);

    c[col] = false;
    rd[row+col] = false;
    ld[row-col+7] = false;
  }

  return;
}

int main() {
  for (int i=0;i<8;i++) cin >> chess[i];
  count(0);
  cout << cnt << endl;
  return 0;
}