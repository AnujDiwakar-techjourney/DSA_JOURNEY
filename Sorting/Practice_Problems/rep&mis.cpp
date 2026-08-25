
#include<bits/stdc++.h>
using namespace std;
 class Solution{
 public:
 	vector<int> findMissingRepeatingNumber(vector<int>&nums){
 		

 		//BRUTE_FORCE_APPROACH...
			// int n=nums.size();
 // 		int repeating=-1,missing=-1;
 // 		for(int i=1;i<=n;i++){
 // 			int cnt=0;
 // 			for(int j=0;j<n;j++){
 // 				if(nums[j]==i)
 // 					cnt++;
 // 			}
 // 			if(cnt==2) repeating=i;
 // 			else if(cnt==0) missing=i;

 // 			if(repeating!=-1 && missing!=-1)
 // 				break;
 // 		}
 // 		return{repeating,missing};
 // 	}
 // };

       // Optimal_approach--->

 long long n=nums.size();
 long long SN=(n*(n+1))/2;
 long long S2N=(n*(n+1)*(2*n+1))/6;
 long long S=0,S2=0;
 for(int i=0;i<n;i++){

 	S+=nums[i];
 	S2+=(long long)nums[i]*(long long)nums[i];
 }
 long long val1=S-SN;
 long long val2=S2-S2N;
 val2=val2/val1;
 long long x=(val1+val2)/2;
 long long y=x-val1;
 return {(int)x,(int)y};
}
};





int main(){
	vector<int> nums={3,1,2,5,4,6,7,5};
	Solution sol;
	vector<int> result=sol.findMissingRepeatingNumber(nums);
	cout<<"The repeating and missing numbers are ---->>>:{"<<result[0]<<" ,"<<result[1]<<"}\n";

	return 0;
		}


