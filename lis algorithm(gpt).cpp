#include<bits/stdc++.h>
using namespace std;

int lis(int nums[], int n) {
    int dp[n];
    fill_n(dp, n, 1); // Initialize dp array with 1

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (nums[i] > nums[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    // Find the maximum value in dp array
    int maxLen = 0;
    for (int i = 0; i < n; ++i) {
        maxLen = max(maxLen, dp[i]);
    }

    // Print the longest increasing subsequence
    int currLen = maxLen;
    int subsequence[currLen];
    for (int i = n - 1; i >= 0; --i) {
        if (dp[i] == currLen) {
            subsequence[currLen - 1] = nums[i];
            currLen--;
        }
    }

    cout << "Longest Increasing Subsequence: ";
    for (int i = 0; i < maxLen; ++i) {
        cout << subsequence[i] << " ";
    }
    cout << endl;

    return maxLen;
}

int main() {
    int nums[] = {10, 9, 2, 5, 3, 7, 101, 18};
    int n = sizeof(nums) / sizeof(nums[0]);
    int length = lis(nums, n);
    cout << "Length of the Longest Increasing Subsequence: " << length << endl;

    return 0;
}
