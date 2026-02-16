//brute force approch


// #include <iostream>
// #include <vector>
// using namespace std;

// void findPair(vector<int> vec, int target){
//     for(int i = 0; i < vec.size(); i++){
//         for(int j = i+1; j <= vec.size(); j++){
//             if((vec[i] + vec[j]) == target){
//                 cout << "The numbers found in arrays are " << vec[i] << " and " << vec[j];
//                 return;
//             }
//         }
//     }
//     cout << "not found!!!!!!" << endl;
// }

// int main(){

//     vector<int> vec = {2,7,11,15};

//     findPair(vec, 9);

//     return 0;
// }





//optimize approch(two pointer)
#include <iostream>
#include <vector>
using namespace std;

void findPair(vector<int> vec,  int target){
    int s = 0;                  
    int e = vec.size() - 1;

    while(s<e){
        if((vec[s] + vec[e]) == target){
            cout << "The numbers found in arrays are " << vec[s] << " and " << vec[e];
            return;
        }
        else if ((vec[s] + vec[e]) > target){
            e--;
        }
        else{
            s++;
        }
    }

    cout << "Not found!!!!!!" << endl;
}

int main(){

    vector<int> vec = {2,7,11,15};

    findPair(vec, 9);

    return 0;
}