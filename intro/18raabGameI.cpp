#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n,a,b;
    cin >> n >> a >> b;

    if ((a+b)>n) {
      cout << "NO" << endl;
      continue;
    }

    vector<int> resA, resB;

    int x=n-a-b;
    for (int i=1; i<=x; i++) {
      resA.push_back(i);
      resB.push_back(i);
    }
    
    // A win
    for (int i=x+1,j=n; i<=x+a,j>x; i++,j--) {
      resA.push_back(j);
      resB.push_back(i);
    }

    // B win
    for (int i=x+a+1,j=n-a; i<=n,j>x+a; i++,j--) {
      resA.push_back(i);
      resB.push_back(j);
    }


    cout << "YES" << endl;
    for (auto i:resA) cout << i << " ";
    cout << endl;
    for (auto i:resB) cout << i << " ";
    cout << endl;
  }

  return 0;
}