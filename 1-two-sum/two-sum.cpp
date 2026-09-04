class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();
       int num;
       int req;
       map<int,int> m;
       for(int i=0;i<n;i++){
        num= nums[i];
        req=target-num;
        if(m.find(req)!=m.end())
        return {i,m[req]};
        m[num]=i;
        
       }
       return {-1,-1};
    }
};