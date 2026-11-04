class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>count; 

        for(int x: nums) {count[x]++;}

        typedef pair<int,int>P;

        priority_queue<P, vector<P>, greater<P>>board;

        for(auto& entries : count) {
            board.push({entries.second, entries.first}); 
            if(board.size() > k) {
                board.pop();
            }
        } 

        vector<int>res; 

        while(!board.empty()) {
            res.push_back(board.top().second);
            board.pop(); 
        }

        return res; 
    
            


        
    }
};
