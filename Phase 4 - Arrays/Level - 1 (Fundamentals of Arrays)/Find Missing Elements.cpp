// You are given an integer array nums consisting of unique integers.
// Originally, nums contained every integer within a certain range. However, some integers might have gone missing from the array.
// The smallest and largest integers of the original range are still present in nums.
// Return a sorted list of all the missing integers in this range. If no integers are missing, return an empty list.


// Example 1:
// Input: nums = [1,4,2,5]
// Output: [3]

// Explanation:
// The smallest integer is 1 and the largest is 5, so the full range should be [1,2,3,4,5]. Among these, only 3 is missing.

#include <iostream>
using namespace std;

int main() {
    int nums[] = {1, 4, 2, 5};
    int n = 4;

    int small = nums[0];
    int large = nums[0];

    // Find smallest and largest
    for (int i = 0; i < n; i++) {
        if (nums[i] < small)
            small = nums[i];

        if (nums[i] > large)
            large = nums[i];
    }

    cout << "Missing elements: ";

    // Check every number from small to large
    for (int i = small; i <= large; i++) {

        bool found = false;

        for (int j = 0; j < n; j++) {
            if (nums[j] == i) {
                found = true;
                break;
            }
        }

        if (found == false) {
            cout << i << " ";
        }
    }

    return 0;
}