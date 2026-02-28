  // Problem: B. Deletion Sort
  // Time: O(n) per test case
  // Space: O(n)

  #include <bits/stdc++.h>
  using namespace std;

  void solve() {
      int n;
      cin >> n;
      vector<int> a(n);
      for (auto &i : a) cin >> i;

      if (is_sorted(a.begin(), a.end())) cout << n << '\n';
      else cout << 1 << '\n';
  }

  int main() {
      ios::sync_with_stdio(false);
      cin.tie(nullptr);

      int t;
      cin >> t;
      while (t--) solve();
      return 0;
  }

