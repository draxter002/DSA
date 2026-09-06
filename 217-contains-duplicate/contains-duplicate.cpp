class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> m;
        for(int num=0;num<nums.size();num++)
        {
          if(m.contains(nums[num]))
          return true;
          m.insert(nums[num]);
        }
        return false;
        
    }
};