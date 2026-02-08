#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  sort(s.begin(),s.end());

  vector<string> res ={s};
  while(next_permutation(s.begin(),s.end())) {
    res.push_back(s);
  }

  cout << res.size() << endl;
  for (auto i:res) {
    cout << i << endl;
  }
  return 0;
}