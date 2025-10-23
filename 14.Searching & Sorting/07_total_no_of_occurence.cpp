#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> v{1,2,3,4,4,4,4,4,6,7};
    int target = 4;
    int count = 0;

    for(int i=0; i<v.size(); i++){
        if(v[i] == target){
            count++;
        }
    }
    cout << "No. of Occurence: " << count << endl;
    return 0;
}