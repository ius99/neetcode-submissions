class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        //given a vector, length#strs[i]

        for(int i=0; i<strs.size(); i++) {
            res  += to_string(strs[i].size()); 
            res += "#"; 
            res += strs[i]; 
        }
        return res; 

    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string>result; 

        while(i < s.size()) {
            int j = i; 
            while(s[j] != '#') {
                j++;
            }

            int length = stoi(s.substr(i, j-i)); 
            j++; 
            string word = s.substr(j, length); 
            result.push_back(word);
            
            i = j+length; 

        } 
        return result; 

    }
};
