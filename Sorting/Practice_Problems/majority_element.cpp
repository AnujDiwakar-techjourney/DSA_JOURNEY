#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int majorityElement(vector<int> &arr,int n){
		int cnt=0,el;
		for(int i=0;i<n;i++){
			if(cnt==0){
				cnt=1;
				el=arr[i];
			} else if(el==arr[i]){
				cnt++;
			}
			else
				cnt--;
		}

		int cnt1=0;
		for(int i=0;i<n;i++){
			if(arr[i]==el) {
             cnt1++;
}
		}

		if(cnt1>(n/2)){
			return el;
		}
		return -1;
	}
};

int main(){
	vector<int> arr={2,2,1,1,1,2,2};
	int n=arr.size();
	Solution sol;
	int ans=sol.majorityElement(arr,n);

	cout<<"the majority majorityElement is :"<<ans<<endl;
	return 0;
}