//BETTER APPROACH.....,..
//Time complexity: O(n) and space complexity: O(1)
#include<bits/stdc++.h>
using namespace std;


int get_element(int arr[],int n){
      int small=INT_MAX,second_small=INT_MAX;
      int large=INT_MIN,second_large=INT_MIN;
      for(int i=0;i<n;i++){
      	small=min(small,arr[i]);
      	large=max(large,arr[i]);
      }

      for(int i=0;i<n;i++){
      	  if (arr[i] < second_small && arr[i] != small)
            second_small = arr[i];
        
        // If the current element is larger than second_large and not equal to the largest, update second_large
        if (arr[i] > second_large && arr[i] != large)
            second_large = arr[i];
      }

      cout<<"second smallest elementt is:"<<second_small;
      cout<<"second largst element is:"<<second_large;
}


int main(){
	int arr[]={2,4,56,67,34,67,89,324,238946,0,-1,-25};
	int n=sizeof(arr)/sizeof(arr[0]);

	get_element(arr,n);

	return 0;
}