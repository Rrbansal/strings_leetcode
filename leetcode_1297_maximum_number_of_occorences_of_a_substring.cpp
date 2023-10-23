class Solution {
public:
unordered_map<string,int>final;
    int maxFreq(string s, int ml, int minSize, int maxSize) {
        for(int k=minSize;k<=maxSize;k++)
        {
            unordered_map<char,int>m;
            int i=0,j=0,count=0;
            while(j<s.size())
            {
                m[s[j]]++;
                if(j-i+1<k) j++;
                else{

                    if(m.size()<=ml)
                    {
                        string s1=s.substr(i,j-i+1);
                        final[s1]++;
                    }
                    m[s[i]]--;
                    if(m[s[i]]==0) m.erase(s[i]);
                    i++;
                    j++;
                }
            }
        }
        int mx=0;
        for(auto x:final)
        {
            mx=max(mx,x.second);
        }
        return mx;
        
    }
};
