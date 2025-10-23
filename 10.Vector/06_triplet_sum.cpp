#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> arr{1,3,5,7,2,4,6};
    int sum = 9;
    // outer loop will traverse for each element
    for(int i=0; i<arr.size();i++){
        for(int j=i+1; j<arr.size(); j++){
            for(int k=j+1; k<arr.size(); k++){
                if(arr[i]+arr[j]+arr[k] == sum){
                    cout << arr[i] <<"," << arr[j] <<"," <<arr[k] << endl; 
                }

            }
           
        }
    }
    return 0;
}