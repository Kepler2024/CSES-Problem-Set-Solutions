#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define NUM 1000000007


int main() {
  int e;
  cin >> e;
  ll ans = 1;
  for (int i=e;i>0;i--) {
    ans *= 2;
    ans %= NUM;
  }

  ans %= NUM;

  cout << ans << endl;
  return 0;
}