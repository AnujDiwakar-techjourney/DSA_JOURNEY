#include<bits/stdc++.h>
using namespace std;

// int sortArr(vector<int>& arr){
//     sort(arr.begin(),arr.end());
//     return arr[arr.size()-1];
// }

// int main(){
//     vector<int> arr1={13,46,24,526723,20,9};
//     vector<int> arr2={132,463,244,523,203,29};

//     cout<<"the largest element of the arr1 is:"<<sortArr(arr1)<<endl;
//     cout<<"the largest element of the arr2 is:"<<sortArr(arr2)<<endl;
//     return 0;
// }
//optimal approach....

int largest_element(vector<int>& arr){
    int lsrgest=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>lsrgest){
            lsrgest=arr[i];
        }
    }
    return lsrgest;
}

int main(){
    vector<int> arr1={13,46,24,526723,20,9};
    vector<int> arr2={132,463,244,523,203,29};
    cout<< "the largest element of the arr1 is :"<<largest_element(arr1)<<endl;
    cout<< "the largest element of the arr2 is :"<<largest_element(arr2)<<endl;
    return 0;

}