#include <iostream>
using namespace std;

int coinChange(int coins[], int numCoins, int amount) {
    int dp[amount + 1];
    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {
        dp[i] = INT_MAX;
        for (int j = 0; j < numCoins; j++) {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }

    if (dp[amount] == INT_MAX) {
        return -1;  // It's not possible to make the amount with the given coins
    } else {
        return dp[amount];  // Return the minimum number of coins required
    }
}

int main() {
    int coins[] = {1, 2, 5};
    int numCoins = sizeof(coins) / sizeof(coins[0]);
    int amount = 11;

    int result = coinChange(coins, numCoins, amount);

    cout << "Minimum number of coins required to make " << amount << " cents: ";
    if (result == -1) {
        cout << "Impossible";
    } else {
        cout << result;
    }
    cout << endl;

    return 0;
}
