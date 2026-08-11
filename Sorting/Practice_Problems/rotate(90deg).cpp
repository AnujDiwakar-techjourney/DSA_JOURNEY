// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     // Function to rotate the matrix 90 degrees clockwise using extra space
//     vector<vector<int>> rotateClockwise(vector<vector<int>>& matrix) {
//         // Get the size of the square matrix
//         int n = matrix.size();

//         // Create a new matrix of same size to store rotated result
//         vector<vector<int>> rotated(n, vector<int>(n));

//         // Traverse each element of original matrix
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 // Place the element at its new rotated position
//                 rotated[j][n - i - 1] = matrix[i][j];
//             }
//         }

//         // Return the rotated matrix
//         return rotated;
//     }
// };

// // Driver code
// int main() {
//     vector<vector<int>> mat = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     Solution obj;
//     vector<vector<int>> rotated = obj.rotateClockwise(mat);

//     // Print the rotated matrix
//     for (auto row : rotated) {
//         for (int val : row) cout << val << " ";
//         cout << endl;
//     }

//     return 0;
// }
// // optimal approach
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     // Function to rotate matrix 90 degrees clockwise in-place
//     void rotateClockwise(vector<vector<int>>& matrix) {
//         int n = matrix.size();

//         // Step 1: Transpose the matrix
//         for (int i = 0; i < n; ++i) {
//             for (int j = i + 1; j < n; ++j) {
//                 // Swap element at (i, j) with (j, i) to transpose
//                 swap(matrix[i][j], matrix[j][i]);
//             }
//         }

//         // Step 2: Reverse each row
//         for (int i = 0; i < n; ++i) {
//             // Reverse the current row to complete clockwise rotation
//             reverse(matrix[i].begin(), matrix[i].end());
//         }
//     }
// };

// // Driver code
// int main() {
//     vector<vector<int>> matrix = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     Solution obj;
//     obj.rotateClockwise(matrix);

//     // Print rotated matrix
//     for (auto row : matrix) {
//         for (int val : row) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//optimal approach
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to rotate matrix 90 degrees clockwise in-place
    void rotateClockwise(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Step 1: Transpose the matrix
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                // Swap element at (i, j) with (j, i) to transpose
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row
        for (int i = 0; i < n; ++i) {
            // Reverse the current row to complete clockwise rotation
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

// Driver code
int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution obj;
    obj.rotateClockwise(matrix);

    // Print rotated matrix
    for (auto row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
