#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void merge(vector<int>& arr,int low,int mid,int high){
        vector<int> temp;
        int left=low,right=mid+1;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
    }

    void mergeSort(vector<int>& arr,int low,int high){
        if(low>=high){
            return;
        } 
        int mid=low+(high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
};

int main(){
    vector<int> arr={5,2,8,4,1};
    cout << "Original array: ";
    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<endl;

Solution sol;
sol.mergeSort(arr,0,arr.size()-1);

    cout << "Sorted array: ";
    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}