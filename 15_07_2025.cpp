// 100 Days of DSA in C++ - Day 100 (July 15)
// Final Day: Kadane's Algorithm (Max Subarray Sum)
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to find the maximum subarray sum using Kadane's Algorithm
int maxSubArraySum(vector<int>& nums) {
    int maxSum = INT_MIN, currSum = 0;

    for (int num : nums) {
        currSum = max(num, currSum + num);
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    // Calling the function and printing the result
    int result = maxSubArraySum(arr);
    cout << "Day 100: Maximum subarray sum is: " << result << endl;

    return 0;
}
