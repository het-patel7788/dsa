//sorting using insertion sort



#include <iostream>
using namespace std;

void insertionSortDescending(char arr[], int n) {
    for (int i = 1; i < n; i++) {
        char curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] < curr) { 
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int n = 6;

    cout << "Original: ";
    printArray(ch, n);

    insertionSortDescending(ch, n);

    cout << "Sorted (Descending): ";
    printArray(ch, n);

    return 0;
}