// // // brute force approach

// // #include <bits/stdc++.h>
// // using namespace std;

// // class Solution {
// // public:
// //     // Function to find count of subarrays with sum equal to k
// //     int subarraySum(vector<int>& arr, int k) {
// //         // Size of the array
// //         int n = arr.size();

// //         // Initialize count of subarrays
// //         int count = 0;

// //         // Traverse all possible start indices
// //         for (int i = 0; i < n; i++) {
// //             // Traverse all possible end indices from start
// //             for (int j = i; j < n; j++) {
// //                 // Initialize sum for current subarray
// //                 int sum = 0;

// //                 // Calculate sum of subarray from i to j
// //                 for (int m = i; m <= j; m++) {
// //                     sum += arr[m];
// //                 }

// //                 // If sum equals k, increment count
// //                 if (sum == k) {
// //                     count++;
// //                 }
// //             }
// //         }

// //         // Return total count of subarrays
// //         return count;
// //     }
// // };

// // int main() {
// //     // Input array
// //     vector<int> arr = {3, 1, 2, 4};

// //     // Target sum
// //     int k = 6;

// //     // Create Solution object
// //     Solution sol;

// //     // Call function and store result
// //     int result = sol.subarraySum(arr, k);

// //     // Print the count of subarrays
// //     cout << "The number of subarrays is: " << result << "\n";

// //     return 0;
// // }

// //better approach
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     // Function to find count of subarrays with sum equal to k
//     int subarraySum(vector<int>& arr, int k) {
//         // Size of the array
//         int n = arr.size();

//         // Initialize count of subarrays
//         int count = 0;

//         // Traverse all possible start indices
//         for (int i = 0; i < n; i++) {
//             // Initialize sum for current subarray
//             int sum = 0;

//             // Traverse all possible end indices from start
//             for (int j = i; j < n; j++) {
//                 // Add current element to sum
//                 sum += arr[j];

//                 // If sum equals k, increment count
//                 if (sum == k) {
//                     count++;
//                 }
//             }
//         }

//         // Return total count of subarrays
//         return count;
//     }
// };

// int main() {
//     // Input array
//     vector<int> arr = {3, 1, 2, 4};

//     // Target sum
//     int k = 6;

//     // Create Solution object
//     Solution sol;

//     // Call function and store result
//     int result = sol.subarraySum(arr, k);

//     // Print the count of subarrays
//     cout << "The number of subarrays is: " << result << "\n";

//     return 0;
// }


// OPTIMAL APPROACH

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find count of subarrays with sum equal to k using prefix sums and hashmap
    int subarraySum(vector<int>& arr, int k) {
        // Size of the array
        int n = arr.size();

        // Map to store frequency of prefix sums
        unordered_map<int, int> prefixSumCount;

        // Initialize prefix sum and count of subarrays
        int prefixSum = 0;
        int count = 0;

        // Base case: prefix sum 0 has occurred once
        prefixSumCount[0] = 1;

        // Traverse through the array
        for (int i = 0; i < n; i++) {
            // Add current element to prefix sum
            prefixSum += arr[i];

            // Calculate the prefix sum that needs to be removed
            int remove = prefixSum - k;

            // If this prefix sum has been seen before,
            // add its count to the result
            if (prefixSumCount.find(remove) != prefixSumCount.end()) {
                count += prefixSumCount[remove];
            }

            // Update the frequency of the current prefix sum
            prefixSumCount[prefixSum]++;
        }

        // Return the total count of subarrays
        return count;
    }
};

int main() {
    // Input array
    vector<int> arr = {3, 1, 2, 4};

    // Target sum
    int k = 6;

    // Create Solution object
    Solution sol;

    // Call function and store result
    int result = sol.subarraySum(arr, k);

    // Print the count of subarrays
    cout << "The number of subarrays is: " << result << "\n";

    return 0;
}
