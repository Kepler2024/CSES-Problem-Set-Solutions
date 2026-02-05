#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll spiral(ll r, ll c) {
  ll n = max(r,c);
  ll M = n * n;

  ll ans = -1;
  if (n&1) {
    if (c==n) return ans=M-(r-1);
    if (r==n) return ans=spiral(n,n)-(n-c);
  } else {
    if (r==n) return ans=M-(c-1);
    if (c==n) return ans=spiral(n,n)-(n-r);
  }
  return -1;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    ll r,c;
    cin >> r >> c;
    cout << spiral(r,c) << endl;
  }
  return 0;
}