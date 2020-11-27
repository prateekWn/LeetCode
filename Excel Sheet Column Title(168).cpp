/*
Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
    ...
Example 1:

Input: 1
Output: "A"
Example 2:

Input: 28
Output: "AB"
Example 3:

Input: 701
Output: "ZY"
*/
class Solution {
public:
    string convertToTitle(int n) {
        
// string str = "";
// while (n--) {
// 	str += 'A'+ n % 26;
//     cout<<str<<endl;
// 	n /= 26;
// }
// reverse(str.begin(), str.end());
// return str;
  
        string str="";
        char arr[26] = {'Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y'};
        
        while(n!=0){
            int mod = n%26;
            str = arr[mod] + str;
            if(mod==0)
                n = n-1;
            n = n/26;
        }
        
        return str;
    }
};
