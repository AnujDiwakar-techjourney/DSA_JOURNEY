#include<bits/stdc++.h>
using namespace std;


class Solution{
public:
    void quickSort(vector<int>& arr,int low,int high){
        if(low<high){
            int pivot=partition(arr,low,high);
            quickSort(arr,low,pivot-1);
            quickSort(arr,pivot+1,high);
        }
    }

    int partition(vector<int>& arr,int low,int high){
        int pivot=arr[high];
        int i=low-1;
        for(int j=low;j<high;j++){
            if(arr[j]<pivot){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[high]);
        return i+1;
    }
};



int main(){
    vector<int> arr={10,7,8,9,1,5};
    cout << "Original array: ";
    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<endl;

    Solution sol;
    sol.quickSort(arr,0,arr.size()-1);
    cout << "Sorted array: ";
    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}