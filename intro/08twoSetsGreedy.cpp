#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  ll S = (n*(n+1))/2;
  if (S&1) {
    cout << "NO" << endl;
    return 0;
  }

  ll T = S / 2;
  vector<int> A,B;

  for (int i=n;i>0;i--) {
    if (i>T) {
      B.push_back(i);
    } else {
      A.push_back(i);
      T -= i; 
    }
  }

  cout << "YES" << endl << A.size() << endl;
  for (int x : A) cout << x << " ";
  cout << endl << B.size() << endl;
  for (int y : B) cout << y << " ";
  cout << endl;

  return 0;
}