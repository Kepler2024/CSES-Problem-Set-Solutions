#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> nums(n-1);
  for (int i=0;i<n-1;i++) {
    cin >> nums[i];
  }

  int found = 0;
  for (int i=0;i<n-1;i++) {
    if (nums[i] == n) found = 1;
  }
  if (!found) {
    cout << n << endl;
    return 0;
  }

  if (n-1 == 1) {
    cout << 1 << endl;
    return 0;
  }

  sort(nums.begin(),nums.end());
  for (int i=0;i<n-2;i++) {
    if (nums[i+1] != nums[i]+1) {
      cout << nums[i] + 1 << endl;
    }
  }

  return 0;
}