#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp; 
        vector<vector<string>>result;

        for(string s:strs) {
            string orignal = s; 
            sort(s.begin(), s.end()); 
            mp[s].push_back(orignal);
        }

        for(auto& pair: mp) {
            result.push_back(pair.second);
        }

        return result; 
        
        
    }
};
