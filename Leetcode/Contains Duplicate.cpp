class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> nums1;
        for(auto n : nums){
        nums1.insert(n);
        }
        if (nums.size()!=nums1.size()){
            return true
        }
        return false;
    }
};