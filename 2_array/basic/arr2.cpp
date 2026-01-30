
// // linear search
// #include <iostream>
// using namespace std;

// bool linearSearch(int arr[], int n, int key){
//     for(int i = 0; i < n; i++){
//         if(arr[i] == key){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){

//     int arr[] = {1,2,3, 5,7, 8,9,13, 45, 78, 4,77};
//     int key = 45;
//     int size = sizeof(arr)/sizeof(arr[0]);

//     bool isKey = linearSearch(arr, size , key);

//     if(isKey == true){
//         cout << "Key : " << key << " is in the array.\n"; 
//     }
//     else{
//         cout << "Key : " << key << " is not in the array.\n";
//     }

//     return 0;
// }




// //reverse an array method-1
// #include <iostream>
// using namespace std;

// void printArr(int *arr, int n){
//     for(int i=0; i<n; i++){
//         cout << arr[i] << ",";
//     }
//     cout << endl;
// }

// int main(){

//     int arr[] = {2,4,5,6,3};
//     int n = sizeof(arr)/sizeof(int);

//     int copyArr[n];

//     for(int i = 0; i < n ; i++){
//         int j = n - i - 1;
//         copyArr[i] = arr[j];
//     }

//     for(int i = 0; i < n; i++){
//         arr[i] = copyArr[i];
//     }

//     printArr(arr, n);

//     return 0;
// }




//reverse an array method-2
// #include <iostream>
// using namespace std;

// void printArr(int *arr, int n){
//     for(int i=0; i<n; i++){
//         cout << arr[i] << ",";
//     }
//     cout << endl;
// }

// int main(){

//     int arr[] = {2,4,5,6,3};
//     int n = sizeof(arr)/sizeof(int);

//     int start = 0, end = n-1;
//     while(start < end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         start++;
//         end--;
//     }

//     printArr(arr, n);

//     return 0;
// }




//binary search 
#include <iostream>
using namespace std;

int binSearch(int *arr, int n, int key){
    int st= 0, end = n-1;

    while(st<=end){
        int mid = (st+end)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){  //2nd half
            st = mid +1;
        }
        else {  //1st half
            end = mid - 1;
        }
    }

    return -1;
}

int main(){

    int arr[] = {2,4,5,6,3};
    int n = sizeof(arr)/sizeof(int);

    cout << binSearch(arr, n, 6);  //this will give output of index of element here it will print 3.

    return 0;
}