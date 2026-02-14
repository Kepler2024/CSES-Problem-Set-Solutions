#include <bits/stdc++.h>
using namespace std;

// g(n) = b(n) ^ (b(n) >> 1)

void printBinary(int num, int n) {
  for (int i=n-1;i>=0;i--) {
    cout << ((num>>i)&1);
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;

  for (int i=0;i<(1<<n);i++) {
    int g = i ^ (i>>1);
    printBinary(g,n);
  }

  return 0;
}