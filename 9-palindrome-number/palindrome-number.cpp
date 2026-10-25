class Solution {
public:
    bool isPalindrome(int x) {
        long temp=x,s=0,a;
        while(x>0)
        {
            a=x%10;
            s=s*10+a;
            x=x/10;
        }
        if(s==temp)
        return true;
        else
        return false;
        
    }
};