#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	//Brute Force approach.....
// 	int stockbuysell(vector<int> &prices,int n){
// 		int maxprofit=0;
// 		for(int i=0;i<n;i++){
// 			for(int j=i+1;j<n;j++){
// 				int profit=prices[j]-prices[i];
// 				maxprofit=max(maxprofit,profit);
// 			}
// 		}
// 		return maxprofit;
// 	}
// };

//Optimal Approach....
			int stockbuysell(vector<int> &prices,int n){
			int maxprofit=0;
			int minprice=INT_MAX;
			for(int price:prices){
				if(price<minprice){
					minprice=price;

				}
				else
					maxprofit=max(maxprofit,price-minprice);
			}
			return maxprofit;
		}
		};
int main(){
	vector<int> prices={7,1,5,3,6,4};
	int n=prices.size();
	Solution sol;
	int ans=sol.stockbuysell(prices,n);
	cout<<"maximum profit is:"<<ans;
	return 0;
}