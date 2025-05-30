#include<iostream>
using namespace std;
#include<set>
#include<vector>
bool containsDuplicate(vector<int>& nums) {
    set<int> st;
    for(int num: nums){
        if(st.find(num) != st.end()){ // found duplicate
            return true;
        }
        st.insert(num);
    }
    return false; // no duplicate found
}
int main() {
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 3, 1};

    cout << "Test 1: " << containsDuplicate(nums1) << endl; 
    cout << "Test 2: " << containsDuplicate(nums2) << endl; 
    
    return 0;
}