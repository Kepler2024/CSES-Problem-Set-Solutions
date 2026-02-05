#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,n,xum=0;
  cin >> N;
  for (int i=1;i<=N;i++) {
    xum ^= i;
  }

  for (int i=1;i<=N-1;i++) {
    cin >> n;
    xum ^= n;
  }

  cout << xum << endl;
  return 0;
}