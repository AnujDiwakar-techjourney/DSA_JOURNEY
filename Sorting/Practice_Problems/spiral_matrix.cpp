#include<bits/stdc++.h>
using namespace std;


class Solution{
public:
	vector<int> spiralMatrix(vector<vector<int>> &matrix){
		vector<int> result;
		int top=0;
		int bottom=matrix.size()-1;
		int left=0;
		int right=matrix[0].size()-1;

		while(top<=bottom && left<=right){
			for(int i=left;i<=right;i++){
				result.push_back(matrix[top][i]);
			}
			top++;
			for(int i=top;i<=bottom;i++){
				result.push_back(matrix[bottom][i]);
			}
			right--;
			if(top <= bottom) {
                // Traverse from right to left on the bottom row
                for(int i = right; i >= left; i--) {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--; // Move bottom boundary up
            }

            // Check if there are columns remaining
            if(left <= right) {
                // Traverse from bottom to top on the left column
                for(int i = bottom; i >= top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left++; // Move left boundary right
            }
		}
		return result;
	}
};



int main(){
	vector<vector<int>> matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	Solution sol;
	vector<int> result=sol.spiralMatrix(matrix);
	for(int val:result){
		cout<< val<< " ";

	}

	return 0;
}