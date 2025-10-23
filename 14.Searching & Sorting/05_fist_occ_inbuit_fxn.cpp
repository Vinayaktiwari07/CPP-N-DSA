#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> v{1,2,3,4,4,4,4,4,6,7};
    int target = 4;

    auto ans = lower_bound(v.begin(), v.end(), target);
    cout << "first occurence is " << ans-v.begin() << endl;
    return 0;
}