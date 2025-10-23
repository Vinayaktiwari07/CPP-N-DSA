#include<iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr{1,2,3,4,5,6};
    vector<int> brr{1,2,3,4};

    vector<int> ans;

    //outer loop on arr
    for(int i=0; i<arr.size(); i++){
        int element = arr[i];
        // for every element, run loop on brr
        for(int j=0; j<brr.size(); j++){
            if(element == brr[j]){
                // mark kr do taki repeat na kre
                brr[j] = -1;
                ans.push_back(element);
            }
        }
    }

    //print ans
    for(auto value: ans){
        cout << value << " ";
    }

    cout << endl;

    return 0;
}