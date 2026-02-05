#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int l = 1;
  int m = 1;
  for (size_t i=1; i<s.size(); i++) {
    if (s[i]==s[i-1]) l++;
    else l=1;
    m = max(m,l);
  }
  cout << m << endl;
  return 0;
}