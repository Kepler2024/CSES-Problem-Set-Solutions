#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
vector<int> wei(n);
ll S = 0;
ll diff = LLONG_MAX;


void solve(int i,ll ans) {
  if (i==n) {
    diff = min(diff,llabs(S-2*ans));
    return;
  }

  solve(i+1,ans+wei[i]);
  solve(i+1,ans);
}

int main() {
  cin >> n; 
  wei.resize(n);
  for (int i=0;i<n;i++) {
    cin >> wei[i];
    S += wei[i];
  }

  solve(0,0);
  cout << diff << endl;
  
  return 0;
}