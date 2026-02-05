#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> v(N);
  for (int i = 0; i<N; i++) {
    cin >>  v[i];
  }
  
  long long s = 0;
  for (int i=1;i<N;i++) {
    if (v[i] < v[i-1]) {
      s += v[i-1]-v[i];
      v[i] = v[i-1];
    }
  }

  cout << s << endl;
  return 0;
}