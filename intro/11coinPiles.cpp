#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int T;
  cin >> T;
  while (T--) {
    ll a,b;
    cin >> a >> b;

    if (((a+b)%3==0)&&(2*a>=b)&&(2*b>=a)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}