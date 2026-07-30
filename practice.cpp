#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[],int n){
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    for(auto x:map){
        cout<<x.first<<"-->"<<x.second <<endl;
    }
}

int main(){
    //input array
    int arr[]={10,5,10,15,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    //call the function to count frequencies

    frequency(arr,n);
}