/*

#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<vector<int> > arr;

    vector<int> a{1,2,3};
    vector<int> b{4,5,6};
    vector<int> c{7,8,9};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for(int i=0; i<arr.size(); i++){  // row size = arr.size()
        for(int j=0; j<arr[i].size(); j++){  // col size = arr[i].size()
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

*/


#include<iostream>
#include<vector>
using namespace std;
int main() {
    int row=5;
    int col=5;
    vector<vector<int> >arr(5,vector<int>(5,-8));

    for(int i=0; i<arr.size(); i++){  // row size = arr.size()
        for(int j=0; j<arr[i].size(); j++){  // col size = arr[i].size()
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
    
    return 0;
}