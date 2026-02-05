#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ans = 0;
int k;

int main() {
  cin >> k;
  for (int i=1;i<=k;i++) {
    ll x = i*i;
    ans = (x*(x-1))/2-(4*(i-1)*(i-2));
    cout << ans << endl;
  }

  return 0;
}