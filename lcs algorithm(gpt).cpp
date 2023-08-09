#include <iostream>
#include <cstring>

using namespace std;

// Function to find the length of the Longest Common Subsequence and print the LCS
void LCS(string X, string Y) {
    int m = X.length();
    int n = Y.length();

    int dp[m + 1][n + 1] = {};


    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    int length = dp[m][n];
    cout << "Length of the Longest Common Subsequence: " << length << endl;

    // Retrieve the LCS
    string lcs;
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (X[i - 1] == Y[j - 1]) {
            lcs = X[i - 1] + lcs;
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1])
            i--;
        else
            j--;
    }

    cout << "Longest Common Subsequence: " << lcs << endl;
}

// Main function
int main() {
    string X = "ABCD";
    string Y = "ACD";

    LCS(X, Y);

    return 0;
}
