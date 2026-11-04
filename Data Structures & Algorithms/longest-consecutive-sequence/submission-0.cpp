class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(), nums.end()); 
        int longest = 0; 

        for(int x : numset) {
            if(numset.count(x-1) == 0) {
                //x-1 doesnt exist, x is the start
                int current = x; 
                int length = 1; 

                while(numset.count(current + 1) == 1) {
                    current++;
                    length++;
                
                }

                longest = max(length, longest); 

            }


        }
        return longest; 
        
    }
};
