#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextPermutation(vector<int> &arr, int n) {
        if(next_permutation(arr.begin(), arr.end())) {
            return arr;  // returns the next permutation
        } else {
            sort(arr.begin(), arr.end()); // if it's the last permutation, wrap around
            return arr;
        }
    }
};
//optimal approach...


int main() {
    vector<int> arr = {1,2,3};
    int n = arr.size();
    Solution obj;
    vector<int> ans = obj.nextPermutation(arr, n);
    for(int x : ans)
        cout << x << " ";
    cout << endl;
    return 0;
}
