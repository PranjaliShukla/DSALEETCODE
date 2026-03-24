class Solution {
public:
void letter(int idx,string digits,string temp,vector<string>&result,vector<string>&mp){
    if(idx>=digits.size()){
        result.push_back(temp);
        return;
    }
    int num=digits[idx]-'0';
    string str=mp[num];
    for(int i=0;i<str.size();i++){
        temp.push_back(str[i]);
        letter(idx+1,digits,temp,result,mp);
        temp.pop_back();
    }

}
    vector<string> letterCombinations(string digits) {
        vector<string>result;
        vector<string>mp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        letter(0,digits,"",result,mp);
        return result;
        
    }
};