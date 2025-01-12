class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,vector<int>> m;
        for(int i=0;i<s.size();i++){
            m[s[i]].push_back(i);
        }
        int flag=0;
        int mini=INT_MAX;
        for(auto x:m){
            if(x.second.size()<2){
                mini =min(x.second[0],mini);
                flag++;
            }
        }
        if(flag==0){
            return -1;
        }
        return mini;
    }
};