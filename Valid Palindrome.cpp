/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false
*/
class Solution {
public:
    bool isPalindrome(string s) {
        
        int n = s.length();
        int newlen = -1;
        for(int i=0;i<n; i++){
            if(isalnum(s[i]))
                s[++newlen] = tolower(s[i]); 
        }
        
        int start = 0;
        
        while(start<newlen){
            
            if(s[start++]!=s[newlen--])
                return false;
        }
        return true;
    }
};
