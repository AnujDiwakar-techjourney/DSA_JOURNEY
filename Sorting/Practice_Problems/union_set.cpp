#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> findUnion(int arr1[],int arr2[],int n,int m){
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(arr1[i]);
        }
        for(int i=0;i<m;i++){
            st.insert(arr2[i]);
        }
        vector<int>unionArr(st.begin(),st.end());
        return unionArr;
    }
};

int main(){
    int arr1[]={1,2,3,4,5,6,7,8,9,10};
    int arr2[]={3,2,4,4,5,11,12};
    int n=10,m=7;
    Solution obj;
    vector<int> result=obj.findUnion(arr1,arr2,n,m);
    cout<<"The union of the two arrays is : ";
    for(int val: result){
        cout<<val<<" ";
    }
    return 0;


}