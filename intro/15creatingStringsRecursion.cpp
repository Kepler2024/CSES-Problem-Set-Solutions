#include <bits/stdc++.h>
using namespace std;

vector<string> res;
bool used[8];


void solve(string &s,string &r) {
  if (r.length()==s.length()) {
    res.push_back(r);
    return;
  }
  for (size_t i=0;i<s.length();i++) {
    if (used[i]) continue;
    if ((i>0)&&(s[i]==s[i-1])&&(!used[i-1])) continue;

    r.push_back(s[i]);
    used[i] = true;
    solve(s,r);

    r.pop_back();
    used[i] = false;
  }
}

int main() {
  string s;
  cin >> s;
  string r;

  sort(s.begin(),s.end());

  solve(s,r);
  cout << res.size() << endl;
  for (auto i:res) cout << i << endl;
  
  return 0;
}