#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for(int i = 0; i < n-1; i++){
        int minIndex = i;

        //to find min element
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

int main(){

    int arr[5] = {2,4,3,1,5};

    selectionSort(arr, 5);

    return 0;
}