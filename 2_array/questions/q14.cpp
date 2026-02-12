#include <iostream>
#include <vector>
#include <algorithm> // Required for swap and reverse
using namespace std;

// The Logic Function
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Step 1: Transpose the Matrix (Swap rows and cols)
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) { 
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse Each Row
    for(int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

// Helper function to visualize the matrix
void printMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    cout << "[" << endl;
    for(int i = 0; i < n; i++) {
        cout << "  [";
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j];
            if(j < n - 1) cout << ", ";
        }
        cout << "]";
        if(i < n - 1) cout << ",";
        cout << endl;
    }
    cout << "]" << endl;
}

int main() {
    // Test Case: 3x3 Matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "--- Original Matrix ---" << endl;
    printMatrix(matrix);

    rotate(matrix);

    cout << "\n--- Rotated Matrix (90 deg) ---" << endl;
    printMatrix(matrix);

    return 0;
}  