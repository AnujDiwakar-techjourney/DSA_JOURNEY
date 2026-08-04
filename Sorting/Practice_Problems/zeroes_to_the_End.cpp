#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& arr){
        int j=-1;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                j=i;
                break;
            }
        }

        //if no zeroes are present in the array then return
        if(j==-1){
            return;
        }

        for(int i=j+1;i<n;i++){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }
};



int main(){
    vector<int> arr={1,0,2,0,3,4,0,5};
    int n=arr.size();
    Solution sol;
    sol.moveZeroes(arr);

    for(int num:arr){
        cout<<num<<" ";
    }
    return 0;
}