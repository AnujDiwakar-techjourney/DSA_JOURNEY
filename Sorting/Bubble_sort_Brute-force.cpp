#include<bits/stdc++.h>
using namespace std;

class BubbleSort{
    public:
            void bubble_sort(vector<int>& arr){
                int n=arr.size();
                for(int i=n-1;i>=0;i--){
                    for(int j=0;j<=i-1;j++){
                        if(arr[j]>arr[j+1]){
                            swap(arr[j],arr[j+1]);
                        }
                    }
                }


                cout<<"after the bubble sort:\n";
                for(int num:arr){
                    cout<<num<<" ";

                }
                cout<<endl;
            }
};

int main(){
    vector<int> arr={13,46,24,52,20,9};
    cout << "before using bubble sort :\n";
    for(int num :arr){
        cout<<num<<" ";
    }
    cout<<endl;

    BubbleSort sorter;
    sorter.bubble_sort(arr);

    return 0;
}