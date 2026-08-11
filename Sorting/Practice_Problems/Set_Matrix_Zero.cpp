#include<bits/stdc++.h>
using namespace std ;

class Solution{
public:
	void setZeros(vector<vector<int>> &matrix){
		int m =matrix.size();
		int n=matrix[0].size();


 // Brute_Force_Approach...

	// 	for(int i=0;i<m;i++){
	// 		for(int j=0;j<n;j++){
	// 			if(matrix[i][j]==0){
	// 				for(int col=0;col<n;col++){
	// 					if(matrix[i][col]!=0)
	// 						matrix[i][col]=-1;
	// 				}
	// 				for(int row=0;row<n;row++){
	// 					if(matrix[row][j]!=0)
	// 						matrix[row][j]=-1;
	// 				}

	// 			}
	// 		}
	// 	}


	// 	for(int i=0;i<m;i++){
	// 		for(int j=0;j<n;j++){
	// 			if(matrix[i][j]==-1)
	// 				matrix[i][j]=0;
	// 		}
	// 	}
	// }


// //Better_Approach_Solution

// 		vector<int> row(m,0);
// 		vector<int> col(n,0);
// 		for(int i=0;i<m;i++){
// 			for(int j=0;j<n;j++){
// 				if(matrix[i][j]==0){
// 					row[i]=1;
// 					col[j]=1;
// 				}
// 			}
// 		}
// 		for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 // If the row or column is marked, set cell to zero
//                 if (row[i] == 1 || col[j] == 1) {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//         	}



//OPTIMAL_APPROACH....

 // Flag to track if first row should be zeroed
        bool firstRowZero = false;
        // Flag to track if first column should be zeroed
        bool firstColZero = false;

        // Check if first row has any zero
        for (int j = 0; j < n; j++) {
            if (matrix[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }

        // Check if first column has any zero
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }

        // Mark rows and columns in first row/column
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set matrix cells to zero based on markers
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Handle first row
        if (firstRowZero) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }

        // Handle first column
        if (firstColZero) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }

};



int main(){
	vector<vector<int>> matrix={{1,1,1},{1,0,1},{1,1,1}};
	int m =matrix.size();
		int n=matrix.size();
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	Solution obj;
	obj.setZeros(matrix);
	for(auto row : matrix){
		for(auto val : row){
			cout << val << " ";
		}
			cout << endl;
	}
	return 0;

}