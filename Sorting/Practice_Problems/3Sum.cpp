// #include <bits/stdc++.h>
// using namespace std;

// // Class to solve 3-sum problem
// class Solution {
// public:
//     // Function to find triplets with sum zero
//     vector<vector<int>> threeSum(vector<int>& arr, int n) {
//         // Store unique triplets
//         set<vector<int>> st;

//         // First loop for first element
//         for (int i = 0; i < n; i++) {
//             // Second loop for second element
//             for (int j = i + 1; j < n; j++) {
//                 // Third loop for third element
//                 for (int k = j + 1; k < n; k++) {
//                     // If triplet sum is zero
//                     if (arr[i] + arr[j] + arr[k] == 0) {
//                         // Store sorted triplet to avoid duplicates
//                         vector<int> temp = {arr[i], arr[j], arr[k]};
//                         sort(temp.begin(), temp.end());
//                         st.insert(temp);
//                     }
//                 }
//             }
//         }

//         // Convert set to vector
//         vector<vector<int>> ans(st.begin(), st.end());
//         return ans;
//     }
// };

// // Driver code
// int main() {
//     vector<int> arr = {-1, 0, 1, 2, -1, -4};
//     int n = arr.size();
//     Solution obj;
//     vector<vector<int>> res = obj.threeSum(arr, n);

//     for (auto &triplet : res) {
//         for (auto &num : triplet) cout << num << " ";
//         cout << endl;
//     }
//     return 0;
// }


// optimal approach 

#include <bits/stdc++.h>
using namespace std;

// Class to solve 3-sum problem
class Solution {
public:
    // Function to find triplets with sum zero
    vector<vector<int>> threeSum(vector<int>& arr, int n) {
        // Sort the array
        sort(arr.begin(), arr.end());
        // Store final result
        vector<vector<int>> ans;

        // First loop for first element
        for (int i = 0; i < n; i++) {
            // Skip duplicates for first element
            if (i > 0 && arr[i] == arr[i - 1]) continue;

            // Two pointers
            int left = i + 1, right = n - 1;

            // Find pairs for current arr[i]
            while (left < right) {
                int sum = arr[i] + arr[left] + arr[right];

                if (sum == 0) {
                    ans.push_back({arr[i], arr[left], arr[right]});
                    left++, right--;

                    // Skip duplicates for left
                    while (left < right && arr[left] == arr[left - 1]) left++;
                    // Skip duplicates for right
                    while (left < right && arr[right] == arr[right + 1]) right--;
                }
                else if (sum < 0) left++;
                else right--;
            }
        }
        return ans;
    }
};

// Driver code
int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    Solution obj;
    vector<vector<int>> res = obj.threeSum(arr, n);

    for (auto &triplet : res) {
        for (auto &num : triplet) cout << num << " ";
        cout << endl;
    }
    return 0;
}
