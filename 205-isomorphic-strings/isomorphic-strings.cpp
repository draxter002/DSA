class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> m;
        map<char,char> n;
        for(int p=0;p<s.size();p++){
            if(m.find(s[p])!=m.end())
            s[p]=m[s[p]];
            else if(n.find(t[p])!=n.end())
            return false;
            else{
                m[s[p]]=t[p];
                n[t[p]]=s[p];
               
                s[p]=t[p];
            }
           

        }
            
           
    cout<<s<<endl<<t;
    if(s==t)
    return true;
    else
    return false;
       
    }
};