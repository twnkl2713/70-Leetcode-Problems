#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int xor1 = 0, xor2 = 0;
    int n = nums.size();
    for(int i=0; i<n; i++){
        xor2 = xor2 ^ nums[i];
        xor1 = xor1 ^ i;
    }
    xor1 = xor1 ^ n;
    return xor1 ^ xor2;
}

int main(){
    vector<int> nums1 = {3, 0, 1};
    vector<int> nums2 = {9,6,4,2,3,5,7,0,1};

    cout << "Test 1: " << missingNumber(nums1) << endl; 
    cout << "Test 2: " << missingNumber(nums2) << endl; 

    return 0;
}