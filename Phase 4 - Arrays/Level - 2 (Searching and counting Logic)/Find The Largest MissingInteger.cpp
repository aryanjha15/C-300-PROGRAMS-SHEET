// You are given an integer array nums and an integer k.
// An integer x is almost missing from nums if x appears in exactly one subarray of size k within nums.
// Return the largest almost missing integer from nums. If no such integer exists, return -1.
// A subarray is a contiguous sequence of elements within an array.

// Example 1:

// Input: nums = [3,9,2,1,7], k = 3

// Output: 7

// Explanation:

// 1 appears in 2 subarrays of size 3: [9, 2, 1] and [2, 1, 7].
// 2 appears in 3 subarrays of size 3: [3, 9, 2], [9, 2, 1], [2, 1, 7].
// 3 appears in 1 subarray of size 3: [3, 9, 2].
// 7 appears in 1 subarray of size 3: [2, 1, 7].
// 9 appears in 2 subarrays of size 3: [3, 9, 2], and [9, 2, 1].
// We return 7 since it is the largest integer that appears in exactly one subarray of size k.

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {

    vector<int> nums = {3, 4, 3, 5};
    int k = 2;

    unordered_map<int, int> count;

    int n = nums.size();

    // Check every subarray of size k
    for (int i = 0; i <= n - k; i++) {

        unordered_set<int> seen;

        for (int j = i; j < i + k; j++) {
            seen.insert(nums[j]);
        }

        // Count each number only once for this subarray
        for (int x : seen) {
            count[x]++;
        }
    }

    int ans = -1;

    // Find largest number appearing in exactly one subarray
    for (auto p : count) {
        if (p.second == 1) {
            ans = max(ans, p.first);
        }
    }

    cout << "Answer: " << ans;

    return 0;
}