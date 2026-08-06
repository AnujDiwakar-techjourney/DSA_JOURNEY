#include<bits/stdc++.h>
using namespace std;

// class Solution{
// public:
// 	string TwoSum(vector<int> &arr,int n,int target){
// 		for(int i=0;i<n;i++){
// 			for(int j=i+1;j<n;j++){
// 				if (arr[i]+arr[j]==target)
// 					return "true";
// 			}
// 		}
// 		return "false";
// 	}
// };

// int main(){
// 	vector<int>arr={1,5,7};
// 	int n=arr.size();
// 	int target=9;
// 	Solution obj;
// 	string  res=obj.TwoSum(arr,n,target);
// 	cout<<res;
// 	return 0;
// }

//Better_Approach

class Solution {
public:
    pair<int,int> TwoSumIndices(vector<int> &arr, int n, int target) {
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++) {
            int complement = target - arr[i];
            if(mp.find(complement) != mp.end()) {
                return {mp[complement], i};  // return indices
            }
            mp[arr[i]] = i;
        }
        return {-1, -1}; // not found
    }
};

int main() {
    vector<int> arr = {2, 6, 5, 8, 11};
    int n = arr.size();
    int target = 14;
    Solution obj;
    pair<int,int> res = obj.TwoSumIndices(arr, n, target);
    
    if(res.first != -1) {
        cout << "Indices: " << res.first << " and " << res.second << endl;
        cout << "Values: " << arr[res.first] << " + " << arr[res.second] << " = " << target << endl;
    } else {
        cout << "No pair found!" << endl;
    }
}
