#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fast(ll a, ll n) {
  ll r = 1;
  while (n) {
    if (n&1) {
      r = r * a;
    }
    a = a * a;
    n = n >> 1;
  }
  return r;
}

vector<int> gray(int n) {
  vector<int> res;
  if (n==1) {
    res.push_back(0);
    res.push_back(1);
  } else {
    vector<int> pre = gray(n-1);
    res.assign(pre.begin(),pre.end());
    ll t = fast(2,n-1);
    for (int i=t-1; i>=0; i--) {
      res.push_back(pre[i]|(1<<(n-1)));
    }
  }
  return res;
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