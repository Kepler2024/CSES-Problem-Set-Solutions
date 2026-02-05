#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int S = (n*(n+1)) / 2;

  if (S&1) {
    cout << "NO" << endl;
    return 0;
  }

  cout << "YES" << endl;

  if (n%4 == 0) {
    cout << n/2 << endl;
    for (int i=1;i<n;i+=4) {
      cout << i << " ";
      cout << i+3 << " ";
    }
    cout << endl << n/2 << endl;
    for (int i=2;i<n;i+=4) {
      cout << i << " ";
      cout << i+1<< " ";
    }
    cout << endl;
    return 0;
  }

  if (n%4 == 3) {
    cout << (n-3)/2 + 1 << endl;
    cout << 3 << " ";
    for (int i=4;i<n;i+=4) {
      cout << i << " ";
      cout << i+3 << " ";
    }
    cout << endl << (n-3)/2 + 2 << endl;
    cout << 1 << " " << 2 << " ";
    for (int i=5;i<n;i+=4) {
      cout << i << " ";
      cout << i+1 << " ";
    }
    cout << endl;
    return 0;
  }

  return 0;
}