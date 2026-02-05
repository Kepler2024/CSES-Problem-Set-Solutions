#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//Legendre's formula
int main() {
  ll n;
  cin >> n;

  ll ans = 0;
  while(n) {
    n /= 5;
    ans += n;
  }
  
  cout << ans << endl;
  return 0;
}