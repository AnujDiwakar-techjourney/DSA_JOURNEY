#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to find the leaders in an array.
    vector<int> leaders(vector<int>& nums) {
        vector<int> ans;
        
        if(nums.empty()) {
            return ans;
        }
        
        // Last element of the vector is always a leader
        int max = nums[nums.size() - 1];
        ans.push_back(nums[nums.size() - 1]);
        
        // Check elements from right to left
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] > max) {
                ans.push_back(nums[i]);
                max = nums[i];
            }
        }
        
        /* Reverse the vector to match
        the required output order*/
        reverse(ans.begin(), ans.end());
        
        //Return the leaders
        return ans;
    }
};

int main() {
    vector<int> nums = {10, 22, 12, 3, 0, 6};
    
    // Create an instance of the Solution class
    Solution finder;
    
    // Get leaders using class method
    vector<int> ans = finder.leaders(nums);
    
    cout << "Leaders in the array are: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    return 0;
}