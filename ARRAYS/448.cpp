#include<iostream>
#include<vector>
using namespace std;
vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> ans;
    int n = nums.size();
    for(int i=0; i<n; i++){
        int idx = abs(nums[i]) - 1;
        if(nums[idx] > 0){ // checks if the value at this pos is still +ve (unmarked)
            nums[idx] = -nums[idx]; // marked as visited
        }
    }
    for(int i=0; i<n; i++){
        if(nums[i] > 0){ // not found (unmarked)
            ans.push_back(i);
        }
    }
    return ans;
}

int main(){
    vector<int> nums1 = {4,3,2,7,8,2,3,1}; 
    vector<int> nums2 = {1,1};            

    vector<int> res1 = findDisappearedNumbers(nums1);
    vector<int> res2 = findDisappearedNumbers(nums2);

    cout << "Test 1: ";
    for(int num : res1) cout << num << " ";
    cout << endl;

    cout << "Test 2: ";
    for(int num : res2) cout << num << " ";
    cout << endl;

    return 0;
}