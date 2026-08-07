//Optimal approach solution

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void SortArray(vector<int> &arr, int n) {
        int low = 0, mid = 0, high = n - 1;
        
        while (mid <= high) {
            if (arr[mid] == 0) {
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            else if (arr[mid] == 1) {
                mid++;
            }
            else { // arr[mid] == 2
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};

int main() {
    vector<int> arr = {1, 0, 2, 1, 0};
    int n = arr.size();
    Solution sol;
    sol.SortArray(arr, n);

    cout << "The sorted array is: ";
    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
