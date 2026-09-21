class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<=nums.size();i++){
            s.insert(i);
        }
        for(int i:nums){
            if(s.find(i)!=s.end()){
                s.erase(i);
            }

        }
        
        return *s.begin();


        
     

         
      
    }
};