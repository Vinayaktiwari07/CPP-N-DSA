#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> v{1,2,3,4,4,4,4,4,6,7};
    int target = 4;

    auto ans = upper_bound(v.begin(), v.end(), target);
    cout << "last occurence is " << ans-v.begin()-1 << endl;
    return 0;
}