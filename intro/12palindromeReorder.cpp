#include <bits/stdc++.h>
using namespace std;
vector<int> alpha(26,0);

int main() {
  string s;
  cin >> s;

  for (char c : s) {
    alpha[c-'A']++;
  }

  int odd = 0;
  for (int i: alpha) {
    if (i&1) {
      odd++;
    }
    if (odd > 1) {
      cout << "NO SOLUTION" << endl;
      return 0;
    }
  }

  for (int i=0;i<26;i++) {
    for (int j=1;j<=alpha[i]/2;j++) {
      cout << char('A'+i);
    }
  }
  for (int i=0;i<26;i++) {
    if(alpha[i]%2!=0) {
      cout << char('A'+i);
    }
  }
  for (int i=25;i>=0;i--) {
    for (int j=1;j<=alpha[i]/2;j++) {
      cout << char('A'+i);
    }
  }
  cout << endl;
  return 0;
}