#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> mp; // (el, ind)
    for(int i=0; i<nums.size(); i++){
        int num = nums[i];
        int more = target - num;
        if(mp.find(more) != mp.end()){ // found the more in the map
            return {mp[more], i}; // return indices of the two numbers
        }
        mp[num] = i;
    }
    return {};
}
int main(){
    vector<int> nums1 = {2,7,11,15}; int target1 = 9;
    vector<int> nums2 = {3, 2, 4}; int target2 = 6;

    // Test 1
    vector<int> result1 = twoSum(nums1, target1);
    cout << "Test 1: ";
    if(result1.empty()){
        cout << "No solution";
    } else {
        cout << result1[0] << " " << result1[1];
    }
    cout << endl;

    // Test 2
    vector<int> result2 = twoSum(nums2, target2);
    cout << "Test 2: ";
    if(result2.empty()){
        cout << "No solution";
    } else {
        cout << result2[0] << " " << result2[1];
    }
    cout << endl;

    return 0;
}