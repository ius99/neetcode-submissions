class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = ""; 

        for(char c: s) {
            if(!isalnum(c)) {  
                continue;
            }
            cleaned += tolower(c); 
        }

        //now the string has no space no commas etc

        int i = 0; 
        int j = cleaned.size()-1; 


        while(i < j ) {
            if(cleaned[i]!=cleaned[j]) {
                return false; 
            }
            i++; 
            j--; 
        }
        return true; 
        
    }
};
