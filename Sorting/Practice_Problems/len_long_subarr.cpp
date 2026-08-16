#include <bits/stdc++.h>
using namespace std;

// compute length of the longest subarray with sum 0
int solve(vector<int>& a) {
    // store best length found so far
    int maxLen = 0;
    // map prefix sum -> first index seen
    unordered_map<int, int> sumIndexMap;
    // running prefix sum
    int sum = 0;

    // iterate through the array
    for (int i = 0; i < (int)a.size(); i++) {
        // update running sum
        sum += a[i];

        // if sum is zero, subarray [0..i] has zero sum
        if (sum == 0) {
            // update best length
            maxLen = i + 1;
        }
        // if this sum seen before, subarray (prevIndex..i] has zero sum
        else if (sumIndexMap.find(sum) != sumIndexMap.end()) {
            // maximize length using previous index
            maxLen = max(maxLen, i - sumIndexMap[sum]);
        }
        // first time seeing this sum, store its index
        else {
            sumIndexMap[sum] = i;
        }
    }

    // return best length
    return maxLen;
}

// program entry
int main() {
    // sample input
    vector<int> a = {9, -3, 3, -1, 6, -5};
    // print result
    cout << solve(a) << endl;
    // exit
    return 0;
}
