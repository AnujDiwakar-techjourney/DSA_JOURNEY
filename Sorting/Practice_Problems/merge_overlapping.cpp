// //brute_force_approach,,,---->
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     // Function to merge overlapping intervals using brute force
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {

//         // Sort intervals based on start time
//         sort(intervals.begin(), intervals.end());

//         // Result array to store merged intervals
//         vector<vector<int>> ans;

//         // Loop through each interval
//         int n = intervals.size();
//         for (int i = 0; i < n; ) {

//             // Start of current merged interval
//             int start = intervals[i][0];
//             int end = intervals[i][1];

//             // Merge with all overlapping intervals
//             int j = i + 1;
//             while (j < n && intervals[j][0] <= end) {
//                 // Update end to the maximum of current end and overlapping interval's end
//                 end = max(end, intervals[j][1]);
//                 j++;
//             }

//             // Add the merged interval to result
//             ans.push_back({start, end});

//             // Move to the next non-overlapping interval
//             i = j;
//         }

//         return ans;
//     }
// };

// int main() {
//     Solution sol;
//     vector<vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};
//     vector<vector<int>> result = sol.merge(intervals);

//     for (auto interval : result) {
//         cout << "[" << interval[0] << "," << interval[1] << "] ";
//     }
//     return 0;
// }


//Optimal_approach----->

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals){
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> merged;
        for(auto interval:intervals){
            if(merged.empty()||merged.back()[1]<interval[0]){
                merged.push_back(interval);
            }
            else{
                merged.back()[1]=max(merged.back()[1],interval[1]);
            }
        }
        return merged;
    }
};

int main(){
    Solution sol;
    vector<vector<int>> intervals={{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> result=sol.merge(intervals);
    for(auto v:result){
        cout<<"["<<v[0]<<","<<v[1]<<"]";
    }
    return 0;
}
