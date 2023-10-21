class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string s;
        string first=strs[0];
        string last=strs[n-1];
        int mini=min(first.size(),last.size());
        for(int i=0;i<mini;i++)
        {
            if(first[i]==last[i]) s+=first[i];
            else return s;
        }
        return s;
    }
}
