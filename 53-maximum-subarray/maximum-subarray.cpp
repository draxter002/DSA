class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN,s=0;
       
        for(int &I : nums){
            
            s+=I;
            maxi=max(maxi,s);
            if(s<0){
            s=0;
            }
        }
        return maxi;
        
    }
};