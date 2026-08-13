// // //approach_1-->to print the entire pyramid

// // #include<bits/stdc++.h>
// // using namespace std;


// // class Solution{
// // public:
// // 	vector<vector<int>> generate(int numRows){
// // 		vector<vector<int>> triangle;

// // 		for(int i=0;i<numRows;i++){
// // 			vector<int> row(i+1,1);
// // 			for(int j=1;j<i;j++){
// // 				row[j]=triangle[i-1][j-1]+triangle[i-1][j];
// // 			}

// // 			triangle.push_back(row);
// // 		}
// // 		return triangle;
// // 	}
// // };


// // int main(){
// // 	int n=5;
// // 	Solution obj;
// // 	vector<vector<int>> result=obj.generate(n);
// // 	for(auto &row: result){
// // 		for(auto &val:row)
// // 			cout<<val<<" ";
// // 		cout<<endl;
// // 	}
// // }


// // // Appproach_2----> print nth row of the pyramid...

// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
// public:
// 	vector<long long> getNthRow(int n){
// 		vector<long long> row;
// 		long long value=1;
// 		row.push_back(value);
// 		for(int k=1;k<n;k++){
// 			value =value*(n-k)/k;
// 			row.push_back(value);


// 		}
// 		return row;
// 	}
// };
// int main(){
// 	int n=5;
// 	Solution obj;
// 	vector<long long> result=obj.getNthRow(n);
// 	for(auto val:result){
// 		cout<< val << " ";
// 	}
// 	return 0;
// }

// Approach_3--> to find the perticular element int the pascals triangle,....

#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
		long long findPascalElement(int r,int c){
			int n=r-1;
			int k=c-1;

			long long result=1;
			for(int i=0;i<k;i++){
				result*=(n-i);
				result/=(i+1);
			}
			return result;
		}
};

int main(){
	Solution sol;
	int r=5,c=3;
	cout<<sol.findPascalElement(r,c);
	return 0;
}