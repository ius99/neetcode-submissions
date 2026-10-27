#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp; 

        for(int i=0; i<nums.size(); i++) {
            int rs = target - nums[i];
            if(mp.count(rs)) {
                return {mp[rs], i}; 
            } else {
                mp[nums[i]] = i; 
            }

        }


    }
};
