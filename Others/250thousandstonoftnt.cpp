#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t;
  cin>>t;
  while(t--)
  {
        int n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long max_difference = 0;

    // We sort the array to make the calculation of maximum difference easier
    sort(a.begin(), a.end());

    // Calculate the prefix sums to efficiently compute the sum of any segment
    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix_sum[i + 1] = prefix_sum[i] + a[i];
    }

    // Iterate over all possible k
    for (int k = 1; k <= n; k++) {
        long long max_sum = LLONG_MIN, min_sum = LLONG_MAX;

        // Calculate sums of all segments of size k
        for (int i = 0; i + k <= n; i++) {
            long long current_sum = prefix_sum[i + k] - prefix_sum[i];
            max_sum = max(max_sum, current_sum);
            min_sum = min(min_sum, current_sum);
        }

        // Calculate the absolute difference and update the maximum difference found
        long long current_difference = max_sum - min_sum;
        max_difference = max(max_difference, current_difference);
    }

    cout << max_difference << endl;

  }
    return 0;
}
