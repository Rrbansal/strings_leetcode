class Solution {
public:
vector<string>mapping;
vector<string>final;
void f(string &digits,int idx,string ans)
{
    if(idx>=digits.size())
    {
        final.push_back(ans);
        return;
    }
    int num=digits[idx]-'0';
    string val=mapping[num];
    for(int i=0;i<val.size();i++)
    {
        ans.push_back(val[i]);
        f(digits,idx+1,ans);
        ans.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        string ans;
        if(digits.size()==0) return final;
        mapping={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        f(digits,0,ans);
        return final;

        
    }
};
