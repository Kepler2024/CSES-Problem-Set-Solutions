#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n,a,b;
    cin >> n >> a >> b;

    if (((a+b)>n)||((a==0)&&(b!=0))||((a!=0)&&(b==0))) {
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
    for (int i=1; i<=a; i++) {
      resA.push_back(x+i+b);
      resB.push_back(x+i);
    }

    // B win
    for (int i=1; i<=b; i++) {
      resA.push_back(x+i);
      resB.push_back(x+i+a);
    }


    cout << "YES" << endl;
    for (auto i:resA) cout << i << " ";
    cout << endl;
    for (auto i:resB) cout << i << " ";
    cout << endl;
  }

  return 0;
}