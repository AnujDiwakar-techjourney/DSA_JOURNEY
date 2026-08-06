#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	// int longestSubarray(vector<int> &arr,int n,int k){
	// 	int maxlength=0;
	// 	for(int start=0;start<n;start++){
	// 		for(int end=0;end<n;end++){
	// 			int sum=0;
	// 			for(int i=start;i<=end;i++){
	// 				sum+=arr[i];
	// 			}

	// 			if (sum==k)
	// 				maxlength=max(maxlength,end-start+1);
	// 		}
	// 	}

	// 	return maxlength;


	// }

	int longestSubarray(vector<int> &arr,int n,int k){
		int maxlength=0;
		int left=0,right=0;
		int sum=arr[0];
		while(right<n){
			while(left<=right && sum>k){
				sum-=arr[left];
				left++;
			}
			if(sum==k){
				maxlength=max(maxlength,right-left+1);
			}

			right++;
			if(right<n)
				sum+=arr[right];
		}
		return maxlength;
	}
};

int main(){
	vector<int> arr={10,5,2,7,1,9};
	int n=arr.size();
	int k=15;
	Solution obj;
	int ans=obj.longestSubarray(arr , n,k);
	cout<<"the longestSubarray is :"<<ans<<endl;
	return 0;
}