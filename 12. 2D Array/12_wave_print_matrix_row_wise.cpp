#include<iostream>
#include<vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>>v){
    int m=v.size();      // no. of rows
    int n=v[0].size();   // no. of cols
    for(int startRow=0; startRow<m; startRow++){
        //even no of row -> Left to Right.
        if((startRow & 1) == 0){
            for(int i=0; i<n; i++){
                cout << v[startRow][i] << " ";
            }
        }
        else{
            //odd no of row -> Right to Left.
            for(int i = n-1; i>=0; i--){
                cout << v[startRow][i] << " ";
            }
        }
    }
}
int main() {
    vector<vector<int>>v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };
    wavePrintMatrix(v);
    return 0;
}