class Solution {
public:
    int firstUniqChar(string s) {
        int n=-1;
        bool  flag=true ;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                if(i==j)
                continue;
                if(s[i]==s[j])
                {
                flag=false;
                break;
                }
                else
                flag=true;
            } 
            if(flag ==true) 
            {
             n=i;
             break;}
             

            
        }
     return n;   
    }
};