//Brute_Force approach to find the elements that appear only once in an array--)
#include<bits/stdc++.h>
using namespace std;
// int main(){
//     vector<int> arr={4,2,1,1,2};
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count==1){
//             cout<<arr[i]<<" ";
//         }
        
//     }
//     return 0;
// }

//Better Approach
// class Solution{
// public:
// 	int getSingleElement(vector<int>& arr,int n){
// 		int maxi=arr[0];
// 		for(int i=0;i<n;i++){
// 			maxi=max(maxi,arr[i]);
// 		}
// 		vector<int> hash(maxi+1,0);
// 		for(int i=0;i<n;i++)
// 			hash[arr[i]]++;
// 		for(int i=0;i<n;i++){
// 			if(hash[arr[i]]==1)
// 				return arr[i];
// 		}
// 		return -1;
// 	}
// };

// int main(){
// 	vector<int> arr={4,2,1,1,2};
// 	int n=arr.size();
// 	Solution obj;
// 	int ans=obj.getSingleElement(arr,n);

// 	cout << "the single element of the array is:"<<ans<<endl;
// 	return 0;
    
// }
class Solution {
public:
    // Function to find the single non-repeating element using XOR
    int getSingleElement(vector<int>& arr) {
        int n = arr.size();
        int xorr = 0;

        // XOR all elements. Duplicates cancel out, leaving the single element.
        for (int i = 0; i < n; i++) {
            xorr = xorr ^ arr[i];
        }

        return xorr;
    }
};

int main() {
    vector<int> arr = {4, 1, 2, 1, 2};

    Solution obj;
    int ans = obj.getSingleElement(arr);

    cout << "The single element is: " << ans << endl;

    return 0;
}