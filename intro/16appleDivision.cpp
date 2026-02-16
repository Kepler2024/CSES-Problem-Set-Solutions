#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  vector<int> wei(n);
  ll S = 0;
  for (int i=0;i<n;i++) {
    cin >> wei[i];
    S += wei[i];
  }
  
  ll diff = LLONG_MAX;
  
  for (int m=0;m<(1<<n);m++) {
    ll sum = 0;
    for (int i=0;i<n;i++) {
      if(m&(1<<i)) sum += wei[i];
    }
    diff = min(diff,llabs(S-2*sum));
  }

  cout << diff << endl;

  return 0;
}