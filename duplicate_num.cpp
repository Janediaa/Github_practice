#include <bits/stdc++.h>
using namespace std;

int func(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    slow = nums[0];
    while(slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int main () {
    vector<int> v = {2,3,5,4,1,4};
    cout << "Duplicate num is : " << func(v) << endl;
}
