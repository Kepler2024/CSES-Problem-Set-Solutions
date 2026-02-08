#include <bits/stdc++.h>
using namespace std;

vector<int> gray(int n) {
  if (n==1) {
    return {0,1};
  } else {
    vector<int> pre = gray(n-1);
    vector<int> res = pre;
    for (int i=pre.size()-1; i>=0; i--) {
      res.push_back(pre[i]|(1<<(n-1)));
    }
    return res;
  }
}

void printBinary(int num, int n) {
  for (int i=n-1;i>=0;i--) {
    cout << ((num>>i)&1);
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;

  vector<int> res = gray(n);
  for (int i:res) printBinary(i,n);

  return 0;
}