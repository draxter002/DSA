class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=(nums.size()*(nums.size()+1))/2;
        int k=0;
        for(int i:nums){
            k+=i;
        }
        
        return s-k;


        
     

         
      
    }
};