class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int a,c;
     for(int i=0;i<nums.size();i++){
        if(c==0)
        a=nums[i];
        if(a==nums[i])
        c++;
        else
        c--;
     }
     return a;
    } 
};