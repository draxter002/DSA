class Solution {
public:
    bool isPalindrome(int x) {
        long temp=x,s=0;
        while(x>0)
        {
            
            s=s*10+(x%10);
            x=x/10;
        }
        if(s==temp)
        return true;
        else
        return false;
        
    }
};