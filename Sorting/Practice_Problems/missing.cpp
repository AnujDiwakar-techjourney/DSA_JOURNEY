#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr1[]={1,2,3,4,6,8,9,10};
     for(int i=0;i<8;i++){
        if(arr1[i]!=i+1){
            cout<<"the missing number is :"<<i+1<<endl;
            break;
        }

     }

     return 0;
}