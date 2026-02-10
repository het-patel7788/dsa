//Diagonal sum of a square matrix


#include <iostream>
using namespace std;

int diagonalSum(int mat[][3], int n){
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += mat[i][i]; //primary diagonal
        if(i != n-1-i){ //to avoid double counting the center element in case of odd n
            sum += mat[i][n-1-i]; //secondary diagonal
        }
    }
    return sum;
}

int main(){

    // int matrix[4][4] = {{1,2,3,4},
    //                     {5,6,7,8},
    //                     {9,10,11,12},
    //                     {13,14,15,16}};


    // cout << diagonalSum(matrix, 4) << endl;



    
    int matrix2[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};

    cout << diagonalSum(matrix2, 3) << endl;

    return 0;
}