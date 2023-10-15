class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string temp;
        vector<string>ans;
        while(ss>>temp) ans.push_back(temp);
        reverse(ans.begin(),ans.end());
        s="";
        for(int i=0;i<ans.size();i++)
        {
            s+=ans[i];
            if(i!=(ans.size()-1)) s+=" ";
        }
        return s;       
    }
};
