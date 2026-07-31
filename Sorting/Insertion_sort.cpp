#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> insertionSort(vector<int>& arr){
        int n= arr.size();
        for(int i=1;i<n;i++){
            int key=arr[i];
            int j=i-1;

        while(j>=0 &&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;

        }
        return arr;
    }
};

int main(){
    vector<int> arr={13,46,24,52,20,9};
    cout << "before using insertion sort:\n";
    for(int num:arr){
        cout<<num<<" ";
        
    }
    cout<<endl;

    Solution solution;
    arr=solution.insertionSort(arr);

    cout << "After Using Insertion Sort: " << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}