#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

ll fast(ll a, ll n) {
  ll r = 1;
  while (n) {
    if (n&1) {
      r = (r * a) % MOD;
    }
    a = (a * a) % MOD;
    n = n >> 1;
  }
  return r;
}

int main() {
  ll n;
  cin >> n;
  cout << (fast(2,n)%MOD) << endl;
  return 0;
}