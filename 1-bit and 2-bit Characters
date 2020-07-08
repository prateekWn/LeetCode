//class Solution {
// public:
//     bool isOneBitCharacter(vector<int>& bits) {
//         int i=0;
//         while(i< bits.size())
//         {
//             if(i == bits.size() - 1)
//             {
//                 return true;
//             }
            
//             if(bits[i] == 1)
//             {
//                 i+=2;
//             }
            
//             else if(bits[i] == 0)
//             {
//                 i++;
//             }
//         }
//         return false;
  
//     }
// };

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        
        
        if(bits.size()==0){
            return false;
        }
        
        for(int i = 0; i<bits.size()-1; ){
            
            if(bits[i]==1){
                i = i+2;
                if(i>=bits.size()){
                    return false;
                }
            }
            else if(bits[i]==0){
                i = i+1;
            }
        }
        
        return true;
    }
};
