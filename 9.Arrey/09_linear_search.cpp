// Without using Function  ->

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5] = {1, 2, 3, 4, 10};
//     int target = 10;
//     int n=5;

//     bool flag = 0;
//     //0 -> not found
//     //1 -> found

//     for(int i=0; i<n; i++){
//         if(arr[i] == target){
//             //found
//             flag=1;
//             break;
//         }
//     }

//     if(flag == 1){
//         cout << "Target Found";
//     }
//     else{
//         cout << "Target Not Found";
//     }
//     return 0;
// }


// by using Function ->

#include<iostream>
using namespace std;

bool find(int arr[], int size, int key){
    // linear search
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;    
}
int main() {
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    cout << "Enter the key to find: " << endl;
    int key;
    cin >> key;

    if(find(arr,size, key)) {
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    return 0;
}