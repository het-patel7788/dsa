#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    //1: Check if it is possible
    // If the number of elements doesn't match the grid size, return empty.
    if (original.size() != (long long)m * n) {
        return {}; 
    }

    //2: Initialize the 2D Vector
    // Create 'm' rows, each with 'n' columns
    vector<vector<int>> ans(m, vector<int>(n));

    //3: Fill the matrix
    for (int i = 0; i < original.size(); i++) {
        // Row is i / n
        // Col is i % n
        ans[i / n][i % n] = original[i];
    }

    return ans;
}

// Helper to print the result
void printMatrix(vector<vector<int>>& mat) {
    if (mat.empty()) {
        cout << "[] (Empty / Impossible)" << endl;
        return;
    }
    
    cout << "[" << endl;
    for (int i = 0; i < mat.size(); i++) {
        cout << "  [";
        for (int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j];
            if (j < mat[i].size() - 1) cout << ", ";
        }
        cout << "]";
        if (i < mat.size() - 1) cout << ",";
        cout << endl;
    }
    cout << "]" << endl;
}

int main() {
    // Test Case 1: Possible
    vector<int> original = {1, 2, 3, 4};
    int m = 2, n = 2;

    cout << "Test Case 1 (2x2): " << endl;
    vector<vector<int>> result = construct2DArray(original, m, n);
    printMatrix(result);

    cout << "-----------------" << endl;

    // Test Case 2: Impossible (Size mismatch)
    vector<int> originalBad = {1, 2, 3};
    int m2 = 2, n2 = 2; // Needs 4 items, but we only have 3

    cout << "Test Case 2 (Impossible): " << endl;
    vector<vector<int>> resultBad = construct2DArray(originalBad, m2, n2);
    printMatrix(resultBad);

    return 0;
}