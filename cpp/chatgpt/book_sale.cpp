#include <iostream>
#include <vector>

int countValidStartingPositions(const std::vector<int>& prices, int K, int Budget) {
    int N = prices.size();
    int validStartingPositions = 0;
    int currentSum = 0;

    // Calculate the sum of the first K books
    for (int i = 0; i < K; ++i) {
        currentSum += prices[i];
    }

    // Check if the initial sum is within the budget
    if (currentSum <= Budget) {
        validStartingPositions++;
    }

    // Sliding window to calculate the sum of each consecutive subarray of length K
    for (int i = K; i < N; ++i) {
        currentSum += prices[i] - prices[i - K];
        if (currentSum <= Budget) {
            validStartingPositions++;
        }
    }

    return validStartingPositions;
}

int main() {
    std::vector<int> prices = {5, 10, 3, 7, 8, 9, 6};
    int K = 3;
    int Budget = 20;

    int result = countValidStartingPositions(prices, K, Budget);
    std::cout << "Number of valid starting positions: " << result << std::endl;

    return 0;
}
