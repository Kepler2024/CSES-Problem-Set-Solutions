#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll cnt = 0;

struct step {
  int from;
  int to;
};

vector<step> proc;

void hanoi(int n, int src, int tar, int mid) {
  step s;
  if (n==1) {
    s.from = src;
    s.to = tar;
    proc.push_back(s);
    cnt++;
    return;
  }
  hanoi(n-1,src,mid,tar);
  s.from = src;
  s.to = tar;
  proc.push_back(s);
  cnt++;
  hanoi(n-1,mid,tar,src);
  return;
}

int main() {
  int N;
  cin >> N;

  hanoi(N,1,3,2);

  cout << cnt << endl;
  for(step i:proc) {
    cout << i.from << " " << i.to << endl;
  }
  return 0;
}
