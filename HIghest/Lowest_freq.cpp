#include<bits/stdc++.h>
using namespace std;
class FrequencyCounter{
public:
    void Frequency(int arr[],int n){
        unordered_map<int,int> map;
        for(int i=0;i<n;i++)
                map[arr[i]]++;

        int maxFreq=0,minFreq=n;
        int maxEle=0,minEle=0;

        for(auto it:map){
            int element=it.first;
            int count=it.second;

            if(count>maxFreq){
                maxFreq=count;
                maxEle=element;
            }

            if(count<minFreq){
                minFreq=count;
                minEle=element;
            }

        }

        cout<<"the highest frequency element is :" <<maxEle<<"\n";
        cout <<"the lpwest frequency element is :"<<minEle<<"\n";


    }
};

int main(){
    FrequencyCounter fc;
    int arr[]={10,5,10,15,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    fc.Frequency(arr,n);
    return 0;
}