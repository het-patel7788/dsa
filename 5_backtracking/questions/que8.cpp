#include <iostream>
#include <vector>
#include <iomanip> 
using namespace std;

const int N = 8;

bool isSafe(int row, int col, vector<vector<int>>& board) {
    return (row >= 0 && row < N && col >= 0 && col < N && board[row][col] == -1);
}

void printBoard(vector<vector<int>>& board) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // setw(2) keeps single digits aligned with double digits
            cout << setw(2) << board[i][j] << " ";
        }
        cout << "\n";
    }
}

bool solveKTUtil(vector<vector<int>>& board, int row, int col, int step, int rMove[], int cMove[]) {
    if (step == N * N) {
        return true;
    }

    for (int i = 0; i < 8; i++) {
        int nextRow = row + rMove[i];
        int nextCol = col + cMove[i];

        if (isSafe(nextRow, nextCol, board)) {
            board[nextRow][nextCol] = step;

            if (solveKTUtil(board, nextRow, nextCol, step + 1, rMove, cMove)) {
                return true;
            }

            board[nextRow][nextCol] = -1;
        }
    }

    return false;
}

int main() {
    vector<vector<int>> board(N, vector<int>(N, -1));

    int rMove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
    int cMove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };

    board[0][0] = 0;

    if (solveKTUtil(board, 0, 0, 1, rMove, cMove)) {
        printBoard(board);
    } else {
        cout << "Solution does not exist." << endl;
    }

    return 0;
}